#include<bits/stdc++.h>

int main(){
  
  long long int valor_para_pagar, quantidade_de_moedas_de_um_yen, valor_para_pagar_dividido_por_quinhentos, aproximacao_do_valor;
  bool pode_pagar;


  scanf("%lld %lld", &valor_para_pagar, &quantidade_de_moedas_de_um_yen);

  if (quantidade_de_moedas_de_um_yen > valor_para_pagar){
    pode_pagar = true;
  } else {
    
    if (valor_para_pagar % 500 == 0){
      pode_pagar = true;
    } else {
      valor_para_pagar_dividido_por_quinhentos = valor_para_pagar / 500;

      aproximacao_do_valor = valor_para_pagar_dividido_por_quinhentos * 500;

      if (aproximacao_do_valor + quantidade_de_moedas_de_um_yen > valor_para_pagar){
        pode_pagar = true;
      } else {
        pode_pagar = false;
      }
    }
  }

  if (pode_pagar){
    printf("Sim \n");
  } else {
    printf("Nao \n");
  }
}