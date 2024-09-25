import psycopg2 as pg

try:
  conn = pg.connect(
    host="localhost",
    database="postgres",
    user="postgres",
    password="root",
    port="5432")
  print('Conectado')
except:
  print('Conexão falhou')

cursor = conn.cursor()

print(type(cursor))