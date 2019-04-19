/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva 
 * Canal do Prof. Wyllian 
 * URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA
 */
#if !defined UFSC_H 
#define UFSC_H
  // Common Libraries:
  #include <stdio.h>

  // Prototypes: funtions/procedures
  void inputK();                 // get CPF (string)
  void quickStopSound();             // stop sound processes
  void signalHandler(int);       // exit when ctrl+c is press
  void processInput(char [*]);   // args: (cpf)
                                 //       *, [], [*], *cpf, cpf[], cpf[*], cpf[15]
  void calcDV(int *);            // args: (v)
                                 //       *, [], [*], *v, v[], v[*], v[11]
  void showOutput(int *);        // args: (v)
                                 //       *, [], [*], *v, v[], v[*], v[11]
                                
  // Global variables:
  char cpf[15]; 
  int  dv[2],
       v[11]; /* int v[]   = {0,0,0,0,0,0,0,0,0,0,0}; 
                 int v[11] = {0,0,0,0,0,0,0,0,0,0,0}; 
                 int v[11] = {0};
                 int v[11] = {}; */     
                 
  //static const int   volsysin  = 75,
  //static const int   volsysout = 20;
  //static const int   delayBG   = 50000; // 50000 us = 50 ms
  static const float volBG     = -25.0, // dB
                     volvoice  = -10.0; // dB
#endif 
