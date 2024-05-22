#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
  int numero_de_veiculos, amostragem, peso_limite, peso, contador, tempo_total;
  queue<int> fila;

  cin >> numero_de_veiculos;
  cin >> amostragem;
  cin >> peso_limite;

  tempo_total = 0;
  contador = 0;

  for (int i = 0; i < numero_de_veiculos; i++){
    cin >> peso;

    fila.push(peso);
  }

  while (fila.size() > 0){
    peso = fila.front();
    fila.pop();

    if (amostragem == 1){
      if (peso > peso_limite){
        tempo_total += 10;
        fila.push(peso - 2);

      } else {
        tempo_total += 5;
      }

    } else {
      if (contador == 0){
        if (peso > peso_limite){
          tempo_total += 10;
          fila.push(peso - 2);
        } else {
          tempo_total += 5;
        }

        contador++;

      } else if (contador == (amostragem - 1)) {
        contador = 0;
        tempo_total += 1;
      } else {
        contador++;
        tempo_total += 1;
      }

    }
  }

  cout << tempo_total << endl;
}
