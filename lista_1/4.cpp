#include<bits/stdc++.h>

using namespace std;

int main(){
  int numero_de_estudantes;
  vector<string> lista_de_estudantes;
  vector<string> lista_de_estudantes_ordenada;
  string nome_do_estudante;

  scanf("%d", &numero_de_estudantes);

  for (int i = 0; i < numero_de_estudantes; i++){
    scanf("%s", &nome_do_estudante);

    lista_de_estudantes.push_back(nome_do_estudante);
    lista_de_estudantes_ordenada.push_back(nome_do_estudante);
  }

  sort(lista_de_estudantes_ordenada.begin(), lista_de_estudantes_ordenada.end());

  for (int i = 0; i < lista_de_estudantes.size(); i++){
    for (int n = 0; n < lista_de_estudantes_ordenada.size(); n++){
      if (lista_de_estudantes_ordenada[n] == lista_de_estudantes[i]){
        printf("%d ", n);
      }
    }

  }
}


/* Erro ao acessar os elementos, descobrir como atribuir isso a uma variável para comparação, ele não está retornando uma string */