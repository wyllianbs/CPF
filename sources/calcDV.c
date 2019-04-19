/* UNIVERSIDADE FEDERAL DE SANTA CATARINA
 * Prof. Wyllian Bezerra da Silva
 * Canal do Prof. Wyllian 
 * URL: https://www.youtube.com/channel/UCuWt4qN-ymklKhYUZabPzmA
 */
#include "../header/ufsc.h" 
void calcDV(int *v){ // v[], v[11], *v, (*v)
  int k,i,r;
  for(k = 0; k <= 1; k++){
    r = 0;
    for(i = 0; i < (9 + k); i++)
      r += *(v + i) * ((10 + k) - i); // r += v[i] * ( (10 + k) - i );
    r %= 11; // r = r % 11;
    if(r < 2)
      *(dv + k) = 0; // dv[k] = 0; 
    else
      *(dv + k) = 11 - r; // dv[k] = 11 - r;
  }
}
