Noções de complexidade de algoritmos

-> O tempo de execução depende do hardware, mas em competição o hardware é o mesmo.
-> Estratégia:
  -> Determinar/Estimar a quantidade de operações de um algoritmo
  -> Simplificando:
    - Operações de leitura/escrita
    - Operação de atribuição/casting
    - Operação matemática
  -> Como contabilizar (Olhar o código fonte!)
  -> Ex.:
    n = input()       +1 operação
    n = int(n)        +1 operação
    n = n+1           +1 operação
    print(n)          +1 operação
                      Total: 4 operações

-> É importante associar a quantidade de operações em relação ao tamanho da entrada
  -> Se a entrada for muito grande, as operações serão executadas mutias vezes (SE TIVER ESTRUTURA DE REPETIÇÃO), tomando muito tempo de execução.

  -> Ex. 2:
    n = input()        +1 operação
    n = int(n)         +1 operação
    s = 0              +1 operação
    i = 1              +1 operação
    while i <= n:      +2n 
      i += 1              +1 operação
      s += i              +1 operação
    print(s)           +1 operação 
                       Total: 2n + 5 operações

  -> Ex. 3:
    n = input()             +1 operação
    n = int(n)              +1 operação
    for i in range(n):      +n^2 operação
      for j in range(n):    +n operação
        print(i,j)            +1 operação    
                            Total: n^2 + 2 ?? 


Qual é o algoritmo com menor tempo de execução:
  f2(n) = 2n + 5
  f3(n) = n^2 <- <- <- <- <- <- 


-> Sempre pensar no pior caso
-> Para encontrar o tempo de execução usar o Big O
  -> Lista de tipos de Big O: https://www.google.com/search?sca_esv=f4dacfe81c780abe&q=list+big+O&tbm=isch&source=lnms&prmd=isvnbmtz&sa=X&ved=2ahUKEwjT7_X22IOFAxWYCrkGHX1EDk0Q0pQJegQICxAB&cshid=1710967058455921&biw=1280&bih=586&dpr=1.25#imgrc=hpVP2l86BYiS_M


  -> Ex. 4:
    n = input()
    a = list(n´.randint(n))

    for i in range(1, n-1):
      for j in range(i+1, n):
        if a[i] < a[j]:             
          aux = a[i]                  +1 operação
          a[i] = a[j]                 +1 operação
          a[j] = aux                  +1 operação
                       

& é usado para pegar endereços de variáveis.

-> Ponteiros

  int a,b;
  int *pont_a; /* ponteiro para inteiro */

  pont_a = &a;

  printf("Endereço de a: %p\n", pont_a);
  printf("Endereço de pont_a: %p\n", &pont_a);

  int c,d;
  int *pont_c, *pont_d;

  pont_c = &c;
  pont_d = &d;

  *pont_c = *pont_d; /* Esse "*" pega o conteúdo caso seja o endereço. */


  **Aprender melhor a usar ponteiros e matrizes usando as classes tipo vector. e suas funções.
  


