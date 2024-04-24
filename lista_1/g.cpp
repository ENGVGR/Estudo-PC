#include<bits/stdc++.h>

using namespace std;

int main(){
  int ano_inicial, ano_bonito;
  string ano_inicial_string;
  bool encontrou_ano_bonito, encontrou_mesma_letra;
  vector<char> valores_ja_utilizados;

  encontrou_ano_bonito = false;
  encontrou_mesma_letra = false;

  scanf("%d", &ano_inicial);

  ano_inicial++;

  while (!encontrou_ano_bonito){
    ano_inicial_string = to_string(ano_inicial);

    /* printf("%d", ano_inicial); */

    for (char c : ano_inicial_string){
      if (find(valores_ja_utilizados.begin(), valores_ja_utilizados.end(), c) != valores_ja_utilizados.end()){
        encontrou_mesma_letra = true;
        break;
      } else {
        valores_ja_utilizados.push_back(c);
      }
    }

    if (encontrou_mesma_letra){
      encontrou_mesma_letra = false;
      ano_inicial++;
      valores_ja_utilizados.clear();
    } else {
      encontrou_ano_bonito = true;
      ano_bonito = ano_inicial;
    }
  }

  printf("%d", ano_bonito);

  return 0;

}