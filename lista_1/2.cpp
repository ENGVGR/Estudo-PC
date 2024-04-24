#include<bits/stdc++.h>

int main(){
  
  long long int numero_de_pessoas, quantia_de_dinheiro, maior_quantia_de_dinheiro, somatorio_de_dinheiro, somatorio_de_dinheiro_desejado, menor_quantia_para_atingir_somatorio_desejado;

  maior_quantia_de_dinheiro = 0;
  somatorio_de_dinheiro = 0;

  scanf("%lld", &numero_de_pessoas);

  for (int i = 0; i < numero_de_pessoas; i++){
    scanf("%lld", &quantia_de_dinheiro);

    if (quantia_de_dinheiro > maior_quantia_de_dinheiro){
      maior_quantia_de_dinheiro = quantia_de_dinheiro;
    }

    somatorio_de_dinheiro += quantia_de_dinheiro;
  }

  somatorio_de_dinheiro_desejado = maior_quantia_de_dinheiro * numero_de_pessoas;

  menor_quantia_para_atingir_somatorio_desejado = somatorio_de_dinheiro_desejado - somatorio_de_dinheiro;

  printf("%lld\n", menor_quantia_para_atingir_somatorio_desejado);
}