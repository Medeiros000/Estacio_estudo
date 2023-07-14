import matplotlib.pyplot as plt

x = list(range(1, 9))

y = [7, 8, 7, 7, 8, 9, 3, 2]

plt.plot(x, y, marker='o')
plt.title('Notas de Matemática')
plt.xlabel('Provas')
plt.ylabel('Notas')
print(plt.show())
