/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva 
 * Canal do Prof. Wyllian 
 * URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA
 */
#include "../header/ufsc.h"
#include <stdlib.h>
void signalHandler(int sig){
  printf("\n");
  quickStopSound();
  exit(0);
}
