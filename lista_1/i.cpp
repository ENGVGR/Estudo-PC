#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
  int linhas, colunas, quantidade_de_linhas, quantidade_de_colunas, menor_distancia_1, maior_distancia_2, linhas_acumuladas;
  vector<int> lista_de_elementos_da_linha;

  scanf("%d %d", &linhas, &colunas);

  char linha_da_matriz[colunas+1];

  quantidade_de_linhas = 0;
  quantidade_de_colunas = 0;
  maior_distancia_2 = 0;
  menor_distancia_1 = 10000;
  linhas_acumuladas = 0;
  
  for (int i = 0; i < linhas; i++){
    scanf("%s", &linha_da_matriz);

    int index = 0;

    for (int u = 0; u < colunas; u++){
      lista_de_elementos_da_linha.push_back(linha_da_matriz[index++] - '0');
    }

    auto ub = find(lista_de_elementos_da_linha.begin() ,lista_de_elementos_da_linha.end() ,1);
    auto distance1 = distance(lista_de_elementos_da_linha.begin(), ub);

    reverse(lista_de_elementos_da_linha.begin(), lista_de_elementos_da_linha.end());
    auto pub = find(lista_de_elementos_da_linha.begin() ,lista_de_elementos_da_linha.end() ,1);

    auto distance2 = distance(pub, lista_de_elementos_da_linha.end());

    if (ub != lista_de_elementos_da_linha.end()){
      if (quantidade_de_linhas > 0 && linhas_acumuladas > 0){
        quantidade_de_linhas += 1 + linhas_acumuladas;
        linhas_acumuladas = 0;
      } else {
        quantidade_de_linhas++;
      }

      if (distance1 < menor_distancia_1){
        menor_distancia_1 = distance1;
      }
      if (distance2 > maior_distancia_2){
        maior_distancia_2 = distance2;
      }
    } else {
      linhas_acumuladas++;
    }

    lista_de_elementos_da_linha.clear();
  }

  if (quantidade_de_linhas == 0){
    quantidade_de_colunas = 0;
  } else {
    quantidade_de_colunas = maior_distancia_2 - menor_distancia_1;
  }

  printf("%dx%d", quantidade_de_colunas, quantidade_de_linhas); 
}
