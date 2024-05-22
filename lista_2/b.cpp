#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/* {identificador, tempo_para_resolver, tempo_que_espera, tempo_para_ligar, tempo_que_chegou_na_call} */
typedef tuple<int,int,int,int,int> tii;

struct maior_tii{
    bool operator()(tii a, tii b){
      if (get<4>(a) == get<4>(b)){
        return get<0>(a) > get<0>(b);
      } else{
        return get<4>(a) > get<4>(b);
      }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int numero_de_clientes, tempo_total, tempo_para_resolver, tempo_que_espera, tempo_para_ligar, tempo_que_chegou_na_call, identificador;
    priority_queue<tii,vector<tii>,maior_tii> clientes;

    tempo_total = 0;

    cin >> numero_de_clientes;

    for (int i = 0; i < numero_de_clientes; i++){
      cin >> tempo_para_resolver;
      cin >> tempo_que_espera;
      cin >> tempo_para_ligar;

      clientes.push({i+1, tempo_para_resolver, tempo_que_espera, tempo_para_ligar, 0});
    }

    while (clientes.size() > 0){
      tie(identificador, tempo_para_resolver, tempo_que_espera, tempo_para_ligar, tempo_que_chegou_na_call) = clientes.top();
      clientes.pop();

      if (tempo_total > tempo_que_chegou_na_call + tempo_que_espera) {
          clientes.push({identificador, tempo_para_resolver, tempo_que_espera, tempo_para_ligar, tempo_que_chegou_na_call+tempo_que_espera+tempo_para_ligar});

      } else if (tempo_total < tempo_que_chegou_na_call) {
        tempo_total = tempo_que_chegou_na_call + tempo_para_resolver;

      } else {
        tempo_total += tempo_para_resolver;
      }
    }

    cout << tempo_total << endl;

    return 0;
}