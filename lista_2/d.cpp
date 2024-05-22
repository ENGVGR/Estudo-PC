#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

/* Armazenar em um map a letra e o número de repetições, cada vez q aparece uma repetição, subtrai, se for 0, substitu por uma letra anterior */

/* {letra, repetições} */
typedef tuple<int,int> tii;

int encontrar_repeticoes (const string& texto, char letra){
  int contador = 0;
  for (char l : texto){
    if (l == letra){
      contador++;
    }
  }
  return contador;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ;
    list<tii> containers;

    tempo_total = 0;

    cin >> numero_de_clientes;

    for (int i = 0; i < numero_de_clientes; i++){
      cin >> tempo_para_resolver;
      cin >> tempo_que_espera;
      cin >> tempo_para_ligar;

      clientes.push({i+1, tempo_para_resolver, tempo_que_espera, tempo_para_ligar, 0});
    }

    

    cout << tempo_total << endl;

    return 0;
}