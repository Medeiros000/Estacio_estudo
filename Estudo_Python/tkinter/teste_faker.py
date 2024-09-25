from faker import Faker

fake = Faker('pt_BR')

for i in range(10):
  print(fake.name())

