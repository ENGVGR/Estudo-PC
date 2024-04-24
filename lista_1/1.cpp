#include<bits/stdc++.h>

int main(){
  long long int total_de_pessoas, garfos, facas, colheres, numero_de_pessoas_que_podem_comer;

  numero_de_pessoas_que_podem_comer = 0;

  scanf("%lld %lld %lld %lld", &total_de_pessoas, &garfos, &facas, &colheres);

  numero_de_pessoas_que_podem_comer += colheres;

  if (garfos > facas) {
    numero_de_pessoas_que_podem_comer += facas;
  } else {
    numero_de_pessoas_que_podem_comer += garfos;
  }

  if (numero_de_pessoas_que_podem_comer > total_de_pessoas){
    numero_de_pessoas_que_podem_comer = total_de_pessoas;
  }

  printf("%lld\n", numero_de_pessoas_que_podem_comer);
}