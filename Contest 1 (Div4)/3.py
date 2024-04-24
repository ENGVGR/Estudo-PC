""" 
Tentativa de somar os dígitos dos números, fazendo a contágem de 0 ao número
Erro: Está dando uma pequena diferença, não descobri a causa.    
"""

total = 0

def sum_by_digit(number):
  global total  

  for i in range(0,int(number),10):
    if (i == 0):
      i = 1
    primeiro_numero = sum([int(x) for x in list(str(i))])
    print("i: ", i, "Primeiro numero: ", primeiro_numero, "total: ", total)
    if int(number) - i >= 9: 
      total += (primeiro_numero * 10) + 45
    elif int(number) - i == 8: 
      total += (primeiro_numero * 9) + 36
    elif int(number) - i == 7:
      total += (primeiro_numero * 8) + 28
    elif int(number) - i == 6:
      total += (primeiro_numero * 7) + 21
    elif int(number) - i == 5:
      total += (primeiro_numero * 6) + 15
    elif int(number) - i == 4:
      total += (primeiro_numero * 5) + 10
    elif int(number) - i == 3:
      total += (primeiro_numero * 4) + 6
    elif int(number) - i == 2:
      total += (primeiro_numero * 3) + 3
    elif int(number) - i == 1:
      total += (primeiro_numero * 2) + 1
    elif int(number) - i == 0:
      total += primeiro_numero  


number_of_entrances = int(input())

for _ in range(number_of_entrances):
  number = input()
  sum_by_digit(number)
  print(total)
  total = 0

