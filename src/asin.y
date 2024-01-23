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
       struct IFW i;
}

%type<t> tipoSimple 
%type<r> paramForm listaParamForm paramAct listaParamAct
%type<s> listaCampos
%type<e> expre expreLogic expreIgual expreRel expreAd expreMul expreUna expreSufi const
%type<u> opUna opAd opMul opLogic opRel opIgual opIncre
%type<p> programa listaDeclaraciones declaracionFunc declaracion declaracionVar
%type<i> instSelec instruccion instEntSal instExpre instIter

%%

programa 
       : 
       {
              dvar = 0;
              niv = 0;
              si = 0;
              cargaContexto(niv);
              $<p>$.varglo = creaLans(si);
              emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
              $<p>$.main = creaLans(si);
              emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
              
       }
       listaDeclaraciones{
              completaLans($<p>1.varglo, crArgEnt(dvar));
              completaLans($<p>1.main, crArgEtq($2.main));
              descargaContexto(niv);
       }
       ;
listaDeclaraciones
       : declaracion{
              $$ = $1;
       }
       | listaDeclaraciones declaracion{
              if($2.main > 0){
                     $$.main = $2.main;
              }
              else{
                     $$.main = $1.main;
              }
       }
       ;
declaracion
       : declaracionVar
       | declaracionFunc{
              $$ = $1;
       }
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
              $<e>$.v = si;
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
              completaLans($<e>7.d, crArgEnt(dvar));
              emite(TOPFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPPOP, crArgNul(), crArgNul(), crArgNul());
              if(strcmp($2, "main") == 0){
                $$.main = $<e>7.v;
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

              emite(EREAD, crArgNul(), crArgNul(), crArgPos(sim.n, sim.d));
       }
       | PRINT_ APAR_ expre CPAR_ PTOCOMA_{
              if($3.t != T_ENTERO){
                     yyerror("argumento de print debe ser entero");
              }

              emite(EWRITE, crArgNul(), crArgNul(), crArgPos(niv, $3.d));
       }
       ;
instSelec
       : IF_ APAR_ expre CPAR_{
              if($3.t != T_LOGICO && $3.t != T_ERROR){
                     yyerror("la expresion del if debe ser de tipo logico");
              }
              $<i>$.ifw = creaLans(si);
              emite(EIGUAL, crArgPos(niv, $3.d), crArgEnt(0), crArgNul());
       } 
       instruccion{
              $<i>$.fin = creaLans(si);
              emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
              completaLans($<i>5.ifw, crArgEnt(si));
       } 
       ELSE_ instruccion{
              completaLans($<i>7.fin, crArgEtq(si));
       }
       ;
instIter
       : WHILE_ {
              $<i>$.ini = si;
       }
       APAR_ expre CPAR_ 
       {
              if($4.t != T_LOGICO){
                     yyerror("argumento de while debe ser logico");
              }
              $<i>$.ifw = creaLans(si);
              emite(EIGUAL, crArgEnt(0), crArgPos(niv, $4.d), crArgNul());
       }
       instruccion{
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq($<i>2.ini));
              completaLans($<i>6.ifw, crArgEtq(si));
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
                     emite(EASIG, crArgPos(niv, $3.d), crArgNul(), crArgPos(sim.n, sim.d));
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
              else {
                     $$.t = $6.t;
                     emite(EMULT, crArgPos(niv, $3.d), crArgEnt(TALLA_TIPO_SIMPLE), crArgPos(niv, $3.d));
                     emite(EVA, crArgPos(sim.n, sim.d), crArgPos(niv, $3.d), crArgPos(niv, $6.d));
              }
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
                     else {
                            $$.t = $5.t;
                            int desp = sim.d + cmp.d;
                            emite(EASIG, crArgPos(niv, $5.d), crArgNul(), crArgPos(sim.n, desp));
                     }
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

              if($2 == 1){
                     $$.d = creaVarTemp();
                     emite(EMULT, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
              }
              if($2 == 2){
                     $$.d = creaVarTemp();
                     emite(ESUM, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
                     emite(EMENEQ, crArgPos(niv, $$.d), crArgEnt(1), crArgEtq(si + 2));
                     emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
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
              else{
                     $$.t = T_LOGICO;
                     $$.d = creaVarTemp();
                     emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
                     if($2 == 1){
                            emite(EIGUAL, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si + 2));
                     }
                     if($2 == 2){
                            emite(EDIST, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si + 2));
                     }
                     emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, $$.d));

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
              else {
                     $$.t = T_LOGICO;
                     $$.d = creaVarTemp();
                     emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
                     if($2 == 1){
                            emite(EMAY, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si + 2));
                     }
                     if($2 == 2){
                            emite(EMEN, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si + 2));
                     }
                     if($2 == 3){
                            emite(EMAYEQ, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si + 2));
                     }
                     if($2 == 4){
                            emite(EMENEQ, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgEtq(si + 2));
                     }
                     emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, $$.d));
              }
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

              $$.d = creaVarTemp();
              emite($2, crArgPos(niv, $1.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
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
              else {
                     $$.t = $2.t;
                     if($1 == 1){
                            $$.d = creaVarTemp();
                            emite(EDIF, crArgEnt(1), crArgPos(niv, $2.d), crArgPos(niv, $$.d));
                     }
                     if($1 == 2){
                            $$.d = creaVarTemp();
                            emite(EDIF, crArgEnt(0), crArgPos(niv, $2.d), crArgPos(niv, $$.d));
                     }
              }
       }
       | opIncre ID_{
              SIMB sim = obtTdS($2);
              if(sim.t != T_ENTERO){
                     yyerror("error en operador prefijo");
              }
              else{
                     $$.t = T_ENTERO;
                     if($1 == 1){
                            emite(ESUM, crArgPos(sim.n, sim.d), crArgEnt(1), crArgPos(sim.n, sim.d));
                            $$.d = sim.d;
                     }
                     if($1 == 2){
                            emite(EDIF, crArgPos(sim.n, sim.d), crArgEnt(1), crArgPos(sim.n, sim.d));
                            $$.d = sim.d;
                     }
              }

       }
       ;
expreSufi
       : const{
              $$.t = $1.t;
              $$.d = creaVarTemp();
              emite(EASIG, crArgEnt($1.v), crArgNul(), crArgPos(niv, $$.d));
       }
       | APAR_ expre CPAR_{
              $$ = $2;
              
       }
       | ID_{
              SIMB sim = obtTdS($1);
              $$.t = sim.t;
              $$.d = creaVarTemp();
              emite(EASIG, crArgPos(sim.n, sim.d), crArgNul(), crArgPos(niv, $$.d));
       }
       | ID_ opIncre{
              SIMB sim = obtTdS($1);
              if(sim.t != T_ENTERO){
                     yyerror("el identificador debe ser entero");
              }
              else{
                     $$.t = T_ENTERO;
                     if($2 == 1){
                            $$.d = creaVarTemp();
                            emite(EASIG, crArgPos(sim.n, sim.d), crArgNul(), crArgPos(niv, $$.d));
                            emite(ESUM, crArgPos(sim.n, sim.d), crArgEnt(1), crArgPos(sim.n, sim.d));
                     }
                     if($2 == 2){
                            $$.d = creaVarTemp();
                            emite(EASIG, crArgPos(sim.n, sim.d), crArgNul(), crArgPos(niv, $$.d));
                            emite(EDIF, crArgPos(sim.n, sim.d), crArgEnt(1), crArgPos(sim.n, sim.d));
                     }
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
                     int desp = sim.d + cmp.d;
                     $$.d = creaVarTemp();
                     emite(EASIG, crArgPos(sim.n, desp), crArgNul(), crArgPos(niv, $$.d));
              }
       }
       | ID_ ACOR_ expre CCOR_{
              if($3.t != T_ENTERO){
                     yyerror("indice de array debe ser entero");
                     $$.t = T_ERROR;
              }
              SIMB sim = obtTdS($1);
              DIM vect = obtTdA(sim.ref);
              $$.t = vect.telem;
              emite(EMULT, crArgPos(niv, $3.d), crArgEnt(TALLA_TIPO_SIMPLE), crArgPos(niv, $3.d));
              $$.d = creaVarTemp();
              emite(EAV, crArgPos(sim.n, sim.d), crArgPos(niv, $3.d), crArgPos(niv, $$.d));
       }
       | ID_ {
              emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(TALLA_TIPO_SIMPLE));
       }
       APAR_ paramAct CPAR_{
              SIMB sim = obtTdS($1);
              if(sim.c != FUNCION){
                     yyerror("variable debe ser una funcion");
                     $$.t = T_ERROR;
              }
              else if(cmpDom(sim.ref, $4.refe) != 1){
                     yyerror("error en el dominio de los parametros actuales");
                     $$.t = T_ERROR;
              }
              else {
                     $$.t = sim.t;
                     INF tdd = obtTdD(sim.ref);
                     //emite(EPUSH, crArgNul(), crArgNul(), crArgEnt(si + 2));
                     emite(CALL, crArgNul(), crArgNul(), crArgEtq(sim.d));
                     emite(DECTOP, crArgNul(), crArgNul(), crArgEnt(tdd.tsp));
                     $$.d = creaVarTemp();
                     emite(EPOP, crArgNul(), crArgNul(), crArgPos(niv, $$.d));
              }
       }
       ;
const
       : CTE_{
              $$.t = T_ENTERO;
              $$.v = yylval.cent;
       }
       | TRUE_{
              $$.t = T_LOGICO;
              $$.d = creaVarTemp();
              $$.v = 1;
              emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
       }
       | FALSE_{
              $$.t = T_LOGICO;
              $$.d = creaVarTemp();
              $$.v = 0;
              emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, $$.d));
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
              emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, $1.d));
       }
       | expre COMA_ {
              emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, $1.d));
       } 
       listaParamAct{
              $$.refe = insTdD($4.refe, $1.t);
       }
       ;
opLogic
       : OPAND_ {
              $$ = 1;
       }
       | OPOR_ {
              $$ = 2;
       }
       ;
opIgual
       : COMPIG_ {$$ = 1;}
       | COMPDIST_ {$$ = 2;}
       ;
opRel
       : COMPMAY_ {$$ = 1;}
       | COMPMEN_ {$$ = 2;}
       | COMPMAYIG_ {$$ = 3;}
       | COMPMENIG_ {$$ = 4;}
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
       : POR_ {
              $$ = EMULT;
       }
       | DIV_ {
              $$ = EDIVI;
       }
       ;
opUna
       : MAS_{
              $$ = 0;
       }
       | MENOS_{
              $$ = 2;
       }
       | OPNOT_{
              $$ = 1;
       }
       ;
opIncre
       : OPINCRE_ {$$ = 1;}
       | OPDECRE_ {$$ = 2;}
       ;

