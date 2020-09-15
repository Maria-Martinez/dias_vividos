#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;
int main ()
{
  time_t timer;               //guarda el tiempo del computador en la variable llamada timer
  struct tm y2k = {0};        //se crea una estructura de tiempo y se guarda en una variable llamada y2k
  double seconds;             //odejeto que almacena la estrucutra de y2k

  y2k.tm_hour = 0;            //variable  que es constante
  y2k.tm_min = 0;              //variable que es constante
  y2k.tm_sec = 0;               //variable que es constante
  int ano;                       // variable int ano que aun, no estano definida
  cout<<"digite el año:"; cin>> ano;       //imprime el mensaje , en el terminal "digite el año:" y define valor de la varible int anterior (int ano)
  int mes;                       // variable int mes que aun, no estano definida
  cout<<"digite el mes:"; cin>> mes;        //imprime el mensaje, en el terminal "digite el mes:" y define valor de la varible int anterior (int mes)
  int dias;                       // variable int dias que aun, no estano definida
  cout<<"digite el dia:"; cin>> dias; //imprime el mensaje, en el terminal "digite el dia:" y define valor de la varible int anterior (int dias)
  y2k.tm_year=ano-1900;        // variable que depende de una operacion con otra variable

  y2k.tm_mon=mes-1;           // variable que depende de una operacion con otra variable

  y2k.tm_mday=dias;           // variable que depende de una operacion con otra variable


  time(&timer);                  // convierte en tiempo unix lo que hay en la varible timer

  seconds = difftime(timer,mktime(&y2k)); //es una operacion que se encarga de calcular la diferencia de tiempo entre la estructura y2k y el timer en tiempo unix
  float dia=seconds/86400;        // procedimiento que convierte el tiempo unix de seg a en dias
  printf ("has vivido %.f :partying_face: ",dia);   // imprime el valor de la variable dia 
  return 0;
}