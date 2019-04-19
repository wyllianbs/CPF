/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva 
 * Canal do Prof. Wyllian 
 * URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA
 */
#include "../header/ufsc.h"
#include <string.h> // poderia estar em ufsc.h, mas seria incluída em todos códigos
void processInput(char *cpf){ // cpf[], cpf[15], *cpf, (*cpf)
  int i,k = 0;
  for(i = 0; i < strlen(cpf); i++){ /* strlen(cpf) retorna o tamanho da string
                                       teste com o operador "or" || e entre com CPF com pontos e hífen */
    if( ( (int)*(cpf + i) - '0' ) >= 0 && ( (int)*(cpf + i)- '0' ) <= 9  ){ // cpf[i] = *(cpf + i)
      *(v + k) = (int)*(cpf + i) - '0'; // v[k] = *(v + k) = (int)*(cpf + i) - '0' = (int)cpf[i] - '0' 
      k++;                              //                 = (int)*(cpf + i) - 48  = (int)cpf[i] - 48
    }
  }
} 
