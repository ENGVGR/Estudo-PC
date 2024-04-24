#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
  long long int n, soma_de_digitos, soma_total, a, b;

  scanf("%lld %lld %lld", &n, &a, &b);
  
  soma_total = 0;

  for (long long int i = 1; i <= n; i++){
    string numero_n = to_string(i);

    /* printf("%s", numero_n.c_str()); */

    soma_de_digitos = 0;
    
    for (char c : numero_n){
      soma_de_digitos += c - '0';
    }

    if (soma_de_digitos >= a && soma_de_digitos <= b){
      soma_total += i;
    }
  }

  printf("%lld", soma_total);
}