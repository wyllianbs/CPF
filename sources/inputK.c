/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva 
 * Canal do Prof. Wyllian 
 * URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA
 */
#include "../header/ufsc.h"
#include <string.h>
#include <stdlib.h> // poderia estar em ufsc.h, mas seria incluída em todos códigos
void inputK(){
  int i, k;
  char str[255];
  char *audioPath = "../audio/"; /* char *audioPath = "../audio/";
                                    char audioPath[] = "../audio/";
                                    char audioPath[8] = "../audio/"; */                                
  quickStopSound(); // encerra os processos play
  sprintf(str,"while true; do i=$(find %s -name bg*.mp3 | shuf); for k in $i; do play --norm=%f -q $k; done; done &",audioPath,volBG);
  system(str);    
  do{
    printf("\nCPF [222.333.666-38]: ");
    scanf("%[^\n]", cpf); 
    getchar();
    
    if( !strcmp(cpf,"quit")   || !strcmp(cpf,"Quit")    || 
        !strcmp(cpf,"q")      || !strcmp(cpf,"Q")       ||
        !strcmp(cpf,"exit")   || !strcmp(cpf,"Exit")    ||
        !strcmp(cpf,"exit()") || !strcmp(cpf,"Exit()")  ){
      quickStopSound(); // encerra os processos play
      exit(0);
    }
    
    k = 0;
    for(i = 0; i < strlen(cpf); i++){ // strlen(cpf) ou 11
      if ( cpf[i] - '0' >= 0 && cpf[i] - '0' <= 9 ){ // (int) opcional
      //if ( isdigit( cpf[i] ) ){ // #include <ctype.h>
        k++;                      
      }                     
    }
  }while(k < 11 || k > 11);
} 
