number_of_lines_readed = 0
number_of_ones = 0
result = False

number_of_tests = int(input())

while number_of_tests > 0:
  number_of_lines = int(input())
  number_of_lines_readed = 0
  number_of_ones = 0
  result = False
  
  while number_of_lines > 0:
    line_of_numbers = input()  

    if not result:

      if number_of_lines_readed == 0 or number_of_ones == 0:
        number_of_ones = line_of_numbers.count("1")
        number_of_lines_readed += 1

      else:
        if number_of_ones == line_of_numbers.count("1"):
          print("SQUARE")
          result = True
        else:
          print("TRIANGLE")
          result = True

    number_of_lines -= 1
  
  number_of_tests -= 1

