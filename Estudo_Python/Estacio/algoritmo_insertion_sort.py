
# tuple = [1, 4, 5, 2, 7, 3, 9, 6, 8]

tuple = [54, 26, 93, 17, 77, 31, 44, 55, 20]


def insertion_sort(tuple):
  for i in range(1, len(tuple)):
    key = tuple[i]
    j = i - 1
    while j >= 0 and key < tuple[j]:
      tuple[j + 1] = tuple[j]
      j -= 1
    tuple[j + 1] = key

  return tuple


result = insertion_sort(tuple)

print(result)
