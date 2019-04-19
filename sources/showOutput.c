/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva 
 * Canal do Prof. Wyllian 
 * URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA
 */
#include "../header/ufsc.h"  
#include <stdlib.h> // poderia estar em ufsc.h, mas seria incluída em todos códigos
#include <unistd.h> // sleep(s) ou usleep(us)
void showOutput(int *v){ // v[], v[11], *v, (*v)
  int i;
  char str[255];
  char *audioPath = "../audio/"; /* char *audioPath = "../audio/";
                                    char audioPath[] = "../audio/";
                                    char audioPath[8] = "../audio/"; */
  
  sprintf(str,"printf \"\nCPF: \""); system(str);
  sprintf(str,"play --norm=%f %sthe_CPF_number.wav  -q;",volvoice,audioPath); system(str); 
  
  for(i = 0; i < 11; i++){
    sprintf(str,"printf \"\e[97;44m%d\e[0m\"",*(v + i));                      system(str);
    sprintf(str,"play --norm=%f %s%d.wav  -q;",volvoice,audioPath,*(v + i));  system(str);
    
    if(i == 2 || i == 5){
      sprintf(str,"printf \"\e[97;44m.\e[0m\"");                              system(str);
      sprintf(str,"play --norm=%f %sdot.wav  -q;",volvoice,audioPath);        system(str);
    }else if(i == 8){
      sprintf(str,"printf \"\e[97;44m-\e[0m\"");                              system(str);
      sprintf(str,"play --norm=%f %sdash.wav  -q;",volvoice,audioPath);       system(str);
    }
  }
    
  if( *(v + 9) == *dv && *(v + 10) == *(dv + 1) ){ // if( v[9] == dv[0] && v[10] == dv[1] ){ 
    sprintf(str,"printf \" \e[5;92mis valid\e[0m\n\n\"");                     system(str);
    sprintf(str,"play --norm=%f %sis_valid.wav  -q;",volvoice,audioPath);     system(str);
  }else{
    sprintf(str,"printf \" \e[5;91mis not valid\e[0m\n\n\"");                 system(str);
    sprintf(str,"play --norm=%f %sis_not_valid.wav  -q;",volvoice,audioPath); system(str);
  }
  quickStopSound(); // encerra os processos do script playaudio.sh 
}
