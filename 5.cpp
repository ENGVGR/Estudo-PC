/* Encontrar o máximo diviser comum (Resolvido usando o algoritmo de euclides) */

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int d, s, f, r, min_value, nao_divisivel;
 
    scanf("%d %d %d",&d, &s, &f);
 
    /* if (d <= s && d <= f){
      min_value = d;
    } else if (f <= s && f <= d){
      min_value = f;
    }else {
      min_value = s;
    }
        
    for (int i = min_value; i > 0; i--){
      if (d % i == 0 && f % i == 0 && s % i == 0 ){
        resp = i;
        break;
      }
    } */

    /* while (true){
      if (d > 0 && f > 0 && s > 0){

        if (d % 2 == 0 && f % 2 == 0 && s % 2 == 0){
          resp = 2 * resp;
          d = d / 2;
          f = f / 2;
          s = s / 2;

        } else if (d % 3 == 0 && f % 3 == 0 && s % 3 == 0) {
          resp = 3 * resp;
          d = d / 3;
          f = f / 3;
          s = s / 3;

        } else {
          if (d <= s && d <= f){
            min_value = d;
          } else if (f <= s && f <= d){
            min_value = f;
          }else {
            min_value = s;
          }

          if (d % min_value == 0 && f % min_value == 0 && s % min_value == 0){
            resp = min_value * resp;
            d = d / min_value;
            f = f / min_value;
            s = s / min_value;
          } else {
            break;
          }
        }
      } 
    } */

    while ((d % f) > 0)  {
      r = d % f;
      d = f;
      f = r;
    }

    while ((f % s) > 0)  {
      r = f % s;
      f = s;
      s = r;
    }

    printf("%d \n", s);
}