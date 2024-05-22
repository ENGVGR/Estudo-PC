#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
  int numero_de_queries, peso_do_presente;
  stack<int> pilha_de_presentes;
  stack<int> pilha_de_maximos;
  char operacao; 

  cin >> numero_de_queries;

  for (int i = 0; i < numero_de_queries; i++){
    cin >> operacao;
    cin >> peso_do_presente;

    if (operacao == 'A'){
      pilha_de_presentes.push(peso_do_presente);

      if (pilha_de_presentes.size() == 1){
        pilha_de_maximos.push(peso_do_presente);
      } else {
        if (peso_do_presente > pilha_de_maximos.top()){
          pilha_de_maximos.push(peso_do_presente);
        } else {
          pilha_de_maximos.push(pilha_de_maximos.top());
        }
      }

    } else if (operacao == 'R') {
      pilha_de_presentes.pop();
      pilha_de_maximos.pop();
    } else {
      if (pilha_de_maximos.size() > 0){
        cout << pilha_de_maximos.top() << endl;
      } else {
        cout << 0 << endl;
      }
    }
  }
}
