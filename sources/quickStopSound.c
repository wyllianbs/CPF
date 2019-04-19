/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva 
 * Canal do Prof. Wyllian 
 * URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA
 */
#include "../header/ufsc.h"
#include <stdlib.h> 
void quickStopSound(){
  system("PID=$(ps -ef | grep [p]lay | awk '{print $2}'); kill -9 $PID 2>/dev/null;"); // stop "play"
}
