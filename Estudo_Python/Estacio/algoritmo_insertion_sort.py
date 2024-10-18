
# list = [1, 4, 5, 2, 7, 3, 9, 6, 8]

list = [54, 26, 93, 17, 77, 31, 44, 55, 20]


def insertion_sort(list):
  for i in range(1, len(list)):
    key = list[i]
    j = i - 1
    while j >= 0 and key < list[j]:
      list[j + 1] = list[j]
      j -= 1
    list[j + 1] = key

  return list


result = insertion_sort(list)

print(result)
