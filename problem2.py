""" Objetivo: Encontrar qual letra aparece mais, A ou B """

number_of_inputs = int(input())

while number_of_inputs > 0:
  string_test = input()

  number_of_As = string_test.count("A")

  if number_of_As > 2:
    print("A")
  else:
    print("B")


  number_of_inputs -= 1
