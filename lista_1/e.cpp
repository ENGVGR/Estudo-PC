#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
  int numero_de_competicoes, numero_de_questoes, dias_passados;
  vector<int> lista_de_problemas;

  dias_passados = 1;

  scanf("%d", &numero_de_competicoes);

  for (int i = 0; i < numero_de_competicoes; i++){
    scanf("%d", &numero_de_questoes);

    lista_de_problemas.push_back(numero_de_questoes);
  }

  sort(lista_de_problemas.begin(), lista_de_problemas.end());

  for (int numero_de_problemas : lista_de_problemas){
    if (numero_de_problemas >= dias_passados){
      dias_passados++;
    }
  }

  printf("%d", dias_passados-1);
}