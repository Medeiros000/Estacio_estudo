
# list = [1, 4, 5, 2, 7, 3, 9, 6, 8]

# list = [54, 26, 93, 17, 77, 31, 44, 55, 20]

# list = [54, 26, 93, 17, 77, 1, 4, 5, 2, 7, 3, 9, 6, 8, 31, 44, 55, 20]


list = [95, 32, 12, 56, 8, 1, 4, 5, 2, 7, 3, 9, 6, 8, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77,
         31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20]

list_jr = [95, 32, 12, 56, 8, 1, 4, 5, 2, 7, 3, 9, 6, 8, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17,
            77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20]


#####################################################################
# Algorithm Bubble Sort by Jr (me)
# 7350 iterations

def bubblesort_jr(list):
  global comp_jr
  comp_jr = 0
  ordened = False

  while ordened == False:
    changes = 0

    for i in range(len(list)-1):
      if list[i] > list[i+1]:
        list[i], list[i+1] = list[i+1], list[i]
        changes += 1
      comp_jr += 1
    if changes == 0:
      ordened = True

  return list


result_jr = bubblesort_jr(list_jr)
print(comp_jr)
print(result_jr)


#####################################################################
# Algorithm Bubble Sort by Copilot
# 9702 iterations

def bubblesort_cp(list):
  global comp_cp
  comp_cp = 0
  for i in range(len(list)):
    for j in range(len(list) - 1):
      if list[j] > list[j + 1]:
        list[j], list[j + 1] = list[j + 1], list[j]
      comp_cp += 1

  return list


result_cp = bubblesort_cp(list)
print(comp_cp)
print(result_cp)
