import math

def sum_of_numbers(number_of_sums):
  if number_of_sums <= 0:
    return 0
  elif number_of_sums >= 9:
    division = math.floor(number_of_sums / 9)

    return (45 * division) + sum_of_numbers(number_of_sums-(9 * division))
  else:
    return number_of_sums + sum_of_numbers(number_of_sums-1)

number_of_tests = int(input())

while number_of_tests > 0:
  number_of_sums = int(input())

  response = sum_of_numbers(number_of_sums)

  print(response)
  number_of_tests -= 0