/* Encontrar a quantidade de azulejos verdes, dado a altura e largura da parede, eles ocupam (1,1) sendo que o primeiro sempre é verde e azulejos de msm cor não podem estar lado a lado ou um em cima do outro. Só há duas cores. */

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int altura, largura, resposta, quantidade_de_pares_largura, quantidade_de_impares_largura;
 
    scanf("%lld %lld",&altura, &largura);

    if (largura > 1) {
      if (largura % 2 == 0){
        quantidade_de_pares_largura = largura / 2;
        quantidade_de_impares_largura = largura / 2;
      }else {
        quantidade_de_pares_largura = ((largura + 1) / 2) - 1;
        quantidade_de_impares_largura = (largura + 1) / 2;
      }
    } else {
      quantidade_de_impares_largura = 1;
      quantidade_de_pares_largura = 0;
    }

    if (altura % 2 == 0){
      resposta = quantidade_de_impares_largura * (altura / 2);
      resposta = quantidade_de_pares_largura * (altura / 2) + resposta;
    } else {
      resposta = quantidade_de_impares_largura * ((altura + 1) / 2);
      resposta = quantidade_de_pares_largura * ((altura - 1) / 2) + resposta;
    }


    printf("%lld \n", resposta);
}