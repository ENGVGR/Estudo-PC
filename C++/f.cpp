#include<bits/stdc++.h>
#include <math.h>
 
using namespace std;
 
int main(){
    int casos_de_teste, tamanho_da_string, tamanho_da_sub_string;
    string entrada;
    string resposta;

    cin >> casos_de_teste;

    for(int i = 0; i < casos_de_teste; i++){
        cin >> tamanho_da_sub_string;

        tamanho_da_string = (2 * tamanho_da_sub_string) - 1;

        cin >> entrada;

        resposta = "";

        for(int u = 0; u < tamanho_da_string; u += 2){
                resposta = resposta + entrada[u];

                if (resposta.size() >= tamanho_da_sub_string){
                  break;
                }
        }

        cout << resposta << endl;

    }


}