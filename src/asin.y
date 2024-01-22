%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"
#include "libgci.h"
%}

%token  APAR_  CPAR_  MAS_  MENOS_  POR_  DIV_  MOD_  IGUAL_ ALLAVE_  CLLAVE_  ACOR_  CCOR_  COMA_  PTO_ PTOCOMA_
%token  COMPIG_  COMPDIST_  COMPMAY_ COMPMAYIG_  COMPMEN_ COMPMENIG_
%token  OPAND_  OPOR_  OPINCRE_  OPDECRE_  OPNOT_  MASIG_  MENOSIG_  PORIG_
%token  READ_  STRUCT_  PRINT_  RETURN_
%token  IF_  ELSE_  ELSEIF_  WHILE_  DO_ 
%token  INT_  BOOL_  
%token  TRUE_  FALSE_

%token<ident> ID_
%token<cent> CTE_   

%union {
       char *ident;
       int cent;
       int t;
       struct PARAM r;
       struct STRUCT_MENOSC s;
       struct EXPRE e;
       int u;

       struct PROGRAMA p;
}

%type<t> tipoSimple 
%type<r> paramForm listaParamForm paramAct listaParamAct
%type<s> listaCampos
%type<e> expre expreLogic expreIgual expreRel expreAd expreMul expreUna expreSufi const declaracionFunc
%type<u> opUna opAd
%type<p> programa

%%

programa 
       : 
       {
              dvar = 0;
              niv = 0;
              cargaContexto(niv);
              $<p>$.varglo = creaLans(si);
              emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
              $<p>$.main = creaLans(si);
              emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
              
       }
       listaDeclaraciones{
              completaLans($<p>1.varglo, crArgEnt(dvar));
              completaLans($<p>1.main, crArgEnt(0));
              descargaContexto(niv);
       }
       ;
listaDeclaraciones
       : declaracion
       | listaDeclaraciones declaracion
       ;
declaracion
       : declaracionVar
       | declaracionFunc
       ;
declaracionVar
       : tipoSimple ID_ PTOCOMA_ {
              if(!insTdS($2, VARIABLE, $1, niv, dvar, -1)){
                     yyerror("Identificador repetido");
              }
              else{
                     dvar += TALLA_TIPO_SIMPLE;   
              }       
       }
       | tipoSimple ID_ ACOR_ CTE_ CCOR_ PTOCOMA_ {
              int numelem = $4;
              if ( $4 <= 0) {
                     yyerror("Talla inapropiada del array");
                     numelem = 0;
              }
              int refe = insTdA( $1, numelem);
              if ( !insTdS( $2, VARIABLE, T_ARRAY, niv, dvar, refe) )
                     yyerror ("Identificador repetido");
              else dvar += numelem * TALLA_TIPO_SIMPLE;
       }
       | STRUCT_ ALLAVE_ listaCampos CLLAVE_ ID_ PTOCOMA_{
              if(!insTdS($5, VARIABLE, T_RECORD, niv, dvar, $3.refe)){
                     yyerror("identificador estructura repetido");
              }
              else{
                     dvar += $3.talla;
              }
       }
       ;
tipoSimple
       : INT_ { $$ = T_ENTERO; }
       | BOOL_ { $$ = T_LOGICO; }
       ;
listaCampos
       : tipoSimple ID_ PTOCOMA_{
              int refe = insTdR(-1, $2, $1, 0);
              if(refe != -1){
                     $$.talla = TALLA_TIPO_SIMPLE;
              }
              $$.refe = refe;
       }
       | listaCampos tipoSimple ID_ PTOCOMA_{
              int refe = insTdR($1.refe, $3, $2, $1.talla);
              if(refe != -1){
                     $$.refe = refe;
                     $$.talla = $1.talla + TALLA_TIPO_SIMPLE;
              }
              else{
                     yyerror("Nombre de campo repetido");
              }
       }
       ;
declaracionFunc
       : tipoSimple ID_ 
       {      
              niv++;
              cargaContexto(niv);
              $<cent>$ = dvar;
              dvar = 0;
       }
       APAR_ paramForm CPAR_ 
       {
              int refe = $5.refe;
              if(!insTdS($2, FUNCION, $1, niv-1, si, refe)){
                     yyerror("identificador de funcion repetido");
              }
              emite(PUSHFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPTOP, crArgNul(), crArgNul(), crArgNul());
              $<e>$.d = creaLans(si);
              emite(INCTOP, crArgNul(), crArgNul(), crArgNul());    
       }
       ALLAVE_ declaracionVarLocal listaInst RETURN_ expre{
              if($12.t != $1){
                     yyerror("error de tipos en el return");
              }
       }
       PTOCOMA_ CLLAVE_ {
              int dvr = TALLA_SEGENLACES + $5.talla + TALLA_TIPO_SIMPLE;
              emite(EASIG, crArgPos(niv, $12.d), crArgNul(), crArgPos(niv, -dvr));
              emite(TOPFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPPOP, crArgNul(), crArgNul(), crArgNul());
              if(strcmp($2, "main") == 0){
                emite(FIN, crArgNul(), crArgNul(), crArgNul());
              }
              else{
                emite(RET, crArgNul(), crArgNul(), crArgNul());
              }

              if(verTdS){
                     mostrarTdS();
              }
              descargaContexto(niv);
              niv--;
              dvar = $<cent>3;
       }
       ;
paramForm
       : {
              $$.refe = insTdD(-1, T_VACIO);
              $$.talla = 0;
       }
       | listaParamForm {
              $$.refe = $1.refe;
              $$.talla = $1.talla - TALLA_SEGENLACES;  
       }
       ;
listaParamForm
       : tipoSimple ID_ {
              $$.refe = insTdD(-1, $1);
              $$.talla = TALLA_SEGENLACES + TALLA_TIPO_SIMPLE;
              insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1);
       }
       | tipoSimple ID_ COMA_ listaParamForm{
              $$.refe = insTdD($4.refe, $1);
              $$.talla = $4.talla + TALLA_TIPO_SIMPLE;
              if(!insTdS($2, PARAMETRO, $1, niv, -$$.talla, -1)){
                     yyerror("nombre de parametro repetido");
              }
       }
       ;
declaracionVarLocal
       : 
       | declaracionVarLocal declaracionVar
       ;
listaInst
       : 
       | listaInst instruccion
       ;
instruccion
       : ALLAVE_ listaInst CLLAVE_
       | instExpre
       | instEntSal
       | instSelec
       | instIter
       ;
instExpre
       : expre PTOCOMA_
       | PTOCOMA_
       ;
instEntSal
       : READ_ APAR_ ID_ CPAR_ PTOCOMA_{
              SIMB sim = obtTdS($3);
              if(sim.t != T_ENTERO){
                     yyerror("argumento de read debe ser entero");
              }
       }
       | PRINT_ APAR_ expre CPAR_ PTOCOMA_{
              if($3.t != T_ENTERO){
                     yyerror("argumento de print debe ser entero");
              }
       }
       ;
instSelec
       : IF_ APAR_ expre CPAR_{
              if($3.t != T_LOGICO && $3.t != T_ERROR){
                     yyerror("la expresion del if debe ser de tipo logico");
              }
       } 
       instruccion ELSE_ instruccion
       ;
instIter
       : WHILE_ APAR_ expre CPAR_ 
       {
              if($3.t != T_LOGICO){
                     yyerror("argumento de while debe ser logico");
              }
       }
       instruccion{
              
       }
       ;
expre
       : expreLogic
       | ID_ IGUAL_ expre{
              SIMB sim = obtTdS($1);
              if(sim.t == T_ERROR){
                     yyerror("objeto no declarado");
              }
              else if($3.t != sim.t && $3.t != T_ERROR){
                     yyerror("error de tipos en asignacion");
              }
              else {
                $$ = $3;
              }
       }
       | ID_ ACOR_ expre CCOR_ IGUAL_ expre{
              SIMB sim = obtTdS($1);
              if(sim.t != T_ARRAY){
                     yyerror("variable debe ser de tipo array");
              }
              else if($3.t != T_ENTERO){
                     yyerror("indice de array debe ser entero");
              }
              else if(obtTdA(sim.ref).telem != $6.t){
                     yyerror("error de tipos en asignacion de array");
              }
              else $$.t = $6.t;
       }
       | ID_ PTO_ ID_ IGUAL_ expre{
              SIMB sim = obtTdS($1);
              if(sim.t != T_RECORD){
                     yyerror("identificador debe ser struct");
                     $$.t = T_ERROR;
              }
              else {
                     CAMP cmp = obtTdR(sim.ref, $3);
                     if(cmp.t != $5.t){
                            yyerror("error en asignacion a struct");
                            $$.t = T_ERROR;
                     }
                     else $$.t = $5.t;
              }
              
       }
       ;
expreLogic
       : expreIgual{
              $$ = $1;
       }
       | expreLogic opLogic expreIgual{
              if(($3.t != T_LOGICO || $1.t != T_LOGICO) && ($1.t != T_ERROR && $3.t != T_ERROR)){
                     yyerror("error en expresion logica");
                     $$.t = T_ERROR;
              }
       }
       ;
expreIgual
       : expreRel{
              $$ = $1;
       }
       | expreIgual opIgual expreRel{
              if($3.t != $1.t && ($1.t != T_ERROR && $3.t != T_ERROR)){
                     yyerror("error en expresion de igualdad");
                     $$.t = T_ERROR;
              }
       }
       ;
expreRel
       : expreAd{
              $$ = $1;
       }
       | expreRel opRel expreAd{
              if(($1.t != T_ENTERO || $3.t != T_ENTERO) && ($1.t != T_ERROR && $3.t != T_ERROR)){
                     yyerror("error en expresion relacional");
                     $$.t = T_ERROR;
              }
              else $$.t = T_LOGICO;
       }
       ;
expreAd
       : expreMul{
              $$ = $1;
       }
       | expreAd opAd expreMul{
              $$.t = T_ENTERO;
              if(($3.t != T_ENTERO || $1.t != T_ENTERO) && ($1.t != T_ERROR && $3.t != T_ERROR)){
                     yyerror("error en expresion aditiva");
              }

              $$.d = creaVarTemp();
              emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
       }
       ;
expreMul
       : expreUna{
              $$ = $1;
       }
       | expreMul opMul expreUna{
              $$.t = T_ENTERO;
              if(($3.t != T_ENTERO || $1.t != T_ENTERO) && ($1.t != T_ERROR && $3.t != T_ERROR)){
                     yyerror("error en expresion multiplicativa");
              }
       }
       ;
expreUna
       : expreSufi{
              $$ = $1;
       }
       | opUna expreUna{
              if($2.t != T_ENTERO && $1 == 0){
                     yyerror("error en expresion unaria");
                     $$.t = T_ERROR;
              }
              else if($2.t != T_LOGICO && $1 == 1){
                     yyerror("error en expresion unaria");
                     $$.t = T_ERROR;
              }
              else $$.t = $2.t;
       }
       | opIncre ID_{
              SIMB sim = obtTdS($2);
              if(sim.t != T_ENTERO){
                     yyerror("error en operador prefijo");
              }
       }
       ;
expreSufi
       : const{
              $$ = $1;
       }
       | APAR_ expre CPAR_{
              $$ = $2;
       }
       | ID_{
              SIMB sim = obtTdS($1);
              $$.t = sim.t;
              $$.d = sim.d;
       }
       | ID_ opIncre{
              SIMB sim = obtTdS($1);
              if(sim.t != T_ENTERO){
                     yyerror("el identificador debe ser entero");
              }
              else{
                     $$.t = T_ENTERO;
              }
       }
       | ID_ PTO_ ID_{
              SIMB sim = obtTdS($1);
              if(sim.t != T_RECORD){
                     yyerror("identificador debe ser struct");
                     $$.t = T_ERROR;
              }
              else{
                     CAMP cmp = obtTdR(sim.ref, $3);
                     if(cmp.t == T_ERROR){
                            yyerror("campo no declarado");
                     }
                     $$.t = cmp.t;
              }
       }
       | ID_ ACOR_ expre CCOR_{
              SIMB sim = obtTdS($1);
              DIM vect = obtTdA(sim.ref);
              $$.t = vect.telem;
       }
       | ID_ APAR_ paramAct CPAR_{
              SIMB sim = obtTdS($1);
              if(sim.c != FUNCION){
                     yyerror("variable debe ser una funcion");
                     $$.t = T_ERROR;
              }
              else if(cmpDom(sim.ref, $3.refe) != 1){
                     yyerror("error en el dominio de los parametros actuales");
                     $$.t = T_ERROR;
              }
              else $$.t = sim.t;
       }
       ;
const
       : CTE_{
              $$.t = T_ENTERO;
              $$.v = yylval.cent;
       }
       | TRUE_{
              $$.t = T_LOGICO;
       }
       | FALSE_{
              $$.t = T_LOGICO;
       }
       ;
paramAct
       : {
             $$.refe = insTdD(-1, T_VACIO); 
       }
       | listaParamAct{
              $$.refe = $1.refe;
       }
       ;
listaParamAct
       : expre{
              $$.refe = insTdD(-1, $1.t);
       }
       | expre COMA_ listaParamAct{
              $$.refe = insTdD($3.refe, $1.t);
       }
       ;
opLogic
       : OPAND_
       | OPOR_
       ;
opIgual
       : COMPIG_
       | COMPDIST_
       ;
opRel
       : COMPMAY_
       | COMPMEN_
       | COMPMAYIG_
       | COMPMENIG_
       ;
opAd
       : MAS_ {
            $$ = ESUM;
       }
       | MENOS_ {
            $$ = EDIF;
       }
       ;
opMul
       : POR_
       | DIV_
       ;
opUna
       : MAS_{
              $$ = 0;
       }
       | MENOS_{
              $$ = 0;
       }
       | OPNOT_{
              $$ = 1;
       }
       ;
opIncre
       : OPINCRE_
       | OPDECRE_
       ;

