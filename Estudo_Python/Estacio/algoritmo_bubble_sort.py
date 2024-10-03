
# tuple = [1, 4, 5, 2, 7, 3, 9, 6, 8]

# tuple = [54, 26, 93, 17, 77, 31, 44, 55, 20]

# tuple = [54, 26, 93, 17, 77, 1, 4, 5, 2, 7, 3, 9, 6, 8, 31, 44, 55, 20]


tuple = [95, 32, 12, 56, 8, 1, 4, 5, 2, 7, 3, 9, 6, 8, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77,
         31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20]

tuple_jr = [95, 32, 12, 56, 8, 1, 4, 5, 2, 7, 3, 9, 6, 8, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17,
            77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20, 54, 26, 93, 17, 77, 31, 44, 55, 20]


#####################################################################
# Algorithm Bubble Sort by Jr (me)
# 7350 iterations

def bubblesort_jr(tuple):
  global comp_jr
  comp_jr = 0
  ordened = False

  while ordened == False:
    changes = 0

    for i in range(len(tuple)-1):
      if tuple[i] > tuple[i+1]:
        tuple[i], tuple[i+1] = tuple[i+1], tuple[i]
        changes += 1
      comp_jr += 1
    if changes == 0:
      ordened = True

  return tuple


result_jr = bubblesort_jr(tuple_jr)
print(comp_jr)
print(result_jr)


#####################################################################
# Algorithm Bubble Sort by Copilot
# 9702 iterations

def bubblesort_cp(tuple):
  global comp_cp
  comp_cp = 0
  for i in range(len(tuple)):
    for j in range(len(tuple) - 1):
      if tuple[j] > tuple[j + 1]:
        tuple[j], tuple[j + 1] = tuple[j + 1], tuple[j]
      comp_cp += 1

  return tuple


result_cp = bubblesort_cp(tuple)
print(comp_cp)
print(result_cp)
