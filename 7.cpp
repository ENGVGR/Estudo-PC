/* Encontrar quantos grupos de 3 podem ser feitos, respeitando o limite de capacidade de pessoas no linf */

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int participantes_sem_grupo, quantidade_de_equipes, capacidade_do_linf, equipe, resultado;

    participantes_sem_grupo = 0;
    resultado = 0;
 
    scanf("%lld %lld",&quantidade_de_equipes, &capacidade_do_linf);

    for (long long int i = 0; i < quantidade_de_equipes; i++){
      scanf("%lld", &equipe);

      if (capacidade_do_linf - ((resultado * 3) + 3) >= 0){
        if (equipe == 3){
          resultado++;
        } else if (equipe > 3){
          resultado++;
          participantes_sem_grupo += equipe - 3;
        } else {
          if (participantes_sem_grupo + equipe >= 3){
            participantes_sem_grupo -= (3 - equipe);
            resultado++;
          } else {
            participantes_sem_grupo += equipe;
          }
        }
      } else {
        break;
      }
    }

    while (participantes_sem_grupo >= 3){
      if (capacidade_do_linf - ((resultado * 3) + 3) >= 0){
        resultado++;
        participantes_sem_grupo -= 3;
      } else {
        break;
      }
    }

    printf("%lld \n", resultado);
}