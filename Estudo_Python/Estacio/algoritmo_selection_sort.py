import random

list = random.sample(range(1, 60), 6)

# list = [5, 3, 2, 4, 7, 1, 0, 6]

def selection_sort(list):
    n = len(list)
    for i in range(n):
        min = i
        for j in range(i+1, n):
            if list[j] < list[min]:
                min = j
        list[i], list[min] = list[min], list[i]
    return list

print(selection_sort(list))
