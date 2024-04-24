#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
  int numero_de_restaurantes, x_inicial, y_incial, x_restaurante, y_restaurante, preco, distancia;
  typedef pair<int,int> pares_de_inteiros;
  vector<pares_de_inteiros> precos_finais;

  scanf("%d %d %d", &numero_de_restaurantes, &x_inicial, &y_incial);

  for (int i = 0; i < numero_de_restaurantes; i++){
    scanf("%d %d %d", &x_restaurante, &y_restaurante, &preco);

    distancia = fabs(x_inicial - x_restaurante) + fabs(y_incial - y_restaurante);

    precos_finais.push_back({(distancia*2) + preco, i+1});
  }

  sort(precos_finais.begin(), precos_finais.end());

  printf("%d %d", precos_finais[0].first, precos_finais[0].second);
   
  return 0;
}