/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva 
 * Canal do Prof. Wyllian 
 * URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA
 */
#include "../header/ufsc.h"
#include <signal.h>
int main(void){
  signal(SIGINT,signalHandler);
  inputK();  
  processInput(cpf);
  calcDV(v);
  showOutput(v);
  return(0);
} 
/* 
 Requisitos (instalação):
 sudo apt install sox libsox-fmt-all gawk konsole kate
 
 Text speech:
 http://www.fromtexttospeech.com

 Prompt customização:
 export PS1='\[\033[1;33m\]\u@\h\[\033[00m\]:$ ';
 export PS1='\[\033[01;31m\]\u@\h\[\033[00m\]:\[\033[01;36m\]\W\[\033[00m\]\$ '
 export PS1='\[\033[1;33m\]\u@\h\[\033[00m\]:\[\033[01;36m\]\W\[\033[00m\]\$ '
 
 Compilação/execução:
 f=CPF; gcc -o ../bin/$f *.c -Wall; ../bin/./$f; rm ../bin/$f
 */
