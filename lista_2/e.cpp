#include <iostream>
#include<bits/stdc++.h>

using namespace std;

typedef tuple<int,int,int> tii;

struct maior_tii{
    bool operator()(tii a, tii b){
      if (get<1>(a) == get<1>(b)){
        return get<0>(a) > get<0>(b);
      } else{
        return get<1>(a) > get<1>(b);
      }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int numero_de_caixas, numero_de_clientes, caixa, cliente, tempo_total, tempo_de_atendimento, indice;
    priority_queue<tii,vector<tii>,maior_tii> caixas;
    queue<int> clientes;
    bool sem_clientes;

    sem_clientes = false;
    tempo_total = 0;

    cin >> numero_de_caixas;
    cin >> numero_de_clientes;

    for (int i = 0; i < numero_de_caixas; i++){
      cin >> caixa;

      caixas.push({i+1, 0, caixa});
    }
    
    for (int i = 0; i < numero_de_clientes; i++){
      cin >> cliente;

      clientes.push(cliente);
    }

    while (caixas.size() > 0){
      if (clientes.size() > 0){
        cliente = clientes.front();
        clientes.pop();
      } else {
        sem_clientes = true; 
      }

      tie(indice, tempo_de_atendimento, caixa) = caixas.top();
      caixas.pop();

      if (!sem_clientes){
          caixas.push({indice, (caixa * cliente) + tempo_de_atendimento, caixa});
      } else {
        tempo_total = tempo_de_atendimento;
      }
    }

    cout << tempo_total << endl;

    return 0;
}