#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
  int numero_de_nomes;
  vector<string> lista_de_nomes_inicial;
  vector<string> lista_de_nomes_ordenada;
  typedef pair<string,int> nome_matricula;
  vector<nome_matricula> lista_de_nomes_com_matricula;
  char nome_do_aluno[26]; /* Usar char ao invés de string */

  scanf("%d", &numero_de_nomes);

  for (int i = 0; i < numero_de_nomes; i++){
    scanf("%26s", &nome_do_aluno);

    lista_de_nomes_inicial.push_back(nome_do_aluno);
    lista_de_nomes_ordenada.push_back(nome_do_aluno);
  }

  sort(lista_de_nomes_ordenada.begin(), lista_de_nomes_ordenada.end());

  for (string nome : lista_de_nomes_inicial){
    for (int i = 0; i < lista_de_nomes_ordenada.size(); i++){
      if (nome == lista_de_nomes_ordenada[i]){
        lista_de_nomes_com_matricula.push_back({nome, i});
        break;
      }
    }
  }

  for (int i =0; i < lista_de_nomes_com_matricula.size();i++){
    printf("%d ", lista_de_nomes_com_matricula[i].second);
  }
}