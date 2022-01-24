#ifndef _LEXICO
#define _LEXICO

#include <iostream>
#include <string>
using namespace std;

class TipoSimbolo{
public:
 static const int ERROR= -1;       
 static const int IDENTIFICADOR= 0;
 static const int ENTERO= 1;
 static const int REAL= 2;
 static const int CADENA= 3;
 static const int TIPO= 4;
 static const int OPADIC= 5;
 static const int OPMULT= 6;
 static const int OPREL= 7;
 static const int OPOR= 8;
 static const int OPAND= 9;
 static const int OPNOT= 10;
 static const int OPIGUALD= 11;
 static const int OPPTCM= 12;
 static const int OPCOMA= 13;
 static const int OPPARANTI= 14;
 static const int OPPARANTF= 15;
 static const int OPLLAVEI= 16;
 static const int OPLLAVEF= 17;
 static const int OPASIG= 18;
 static const int OPCONDI= 19;
 static const int OPITERA= 20;
 static const int OPRETURN= 21;
 static const int OPSINO= 22;
 static const int PESOS= 23;       
 
};


class Lexico{
      private:
       string fuente;
              
       int ind;       
       bool continua;
       char c;
       int estado;

       char sigCaracter();       
       void sigEstado(int estado);
       void aceptacion(int estado);
       bool esLetra(char c);
       bool esDigito(char c);
       bool esEspacio(char c);
       void retroceso();
              
      public:
       string simbolo;
       int tipo;
             
       Lexico(string fuente);             
       Lexico();
       
       void entrada(string fuente);              
       string tipoAcad(int tipo);

       int sigSimbolo();
       bool terminado();
       
};


#endif