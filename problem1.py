""" Objetivo: Encontrar a soma mínima de números em sequência de um intervalo dado
    Resolvido usando a técnica Sliding Window Technique """

final_sum = -1
final_index = -1


""" Time limit exced:
 def find_min_sum(list_with_numbers, interval):
  global final_sum
  global final_index
  for i in range(0, len(list_with_numbers)):
    if len(list_with_numbers) - i < interval:
      break
    list_interval = list_with_numbers[i:i+interval]
    list_sum = sum(list_interval)
    if final_sum == -1 or list_sum < final_sum:
      final_sum = list_sum
      final_index = i """

def find_min_sum(list_with_numbers, interval):
  global final_sum
  global final_index
  list_interval = list_with_numbers[:interval]
  list_sum = sum(list_interval)
  final_sum = list_sum
  final_index = 0

  for i in range(len(list_with_numbers) - interval):
    list_sum = list_sum - list_with_numbers[i] + list_with_numbers[i+interval]
    if min(final_sum, list_sum) == list_sum:
      final_sum = list_sum
      final_index = i + 1

number_of_numbers, interval = input().split()
list_of_numbers = input().split()

list_of_numbers = [int(x) for x in list_of_numbers]

find_min_sum(list_of_numbers, int(interval))

print(final_index+1)

