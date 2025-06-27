numb = float(input())
auxiliar=numb
nota100 = int(auxiliar/100)
auxiliar = auxiliar % 100
nota50 = int(auxiliar/50)
auxiliar = auxiliar % 50
nota20 = int(auxiliar/20)
auxiliar = auxiliar % 20
nota10 = int(auxiliar/10)
auxiliar = auxiliar % 10
nota5 = int(auxiliar/5)
auxiliar = auxiliar % 5
nota2 = int(auxiliar/2)
auxiliar = auxiliar % 2
moeda1 = int(auxiliar/1)
auxiliar = auxiliar % 1
moeda50 = int(auxiliar/0.50)
auxiliar = auxiliar % 0.50
moeda25 = int(auxiliar/0.25)
auxiliar = auxiliar % 0.25
moeda10 = int(auxiliar/0.10)
auxiliar = auxiliar % 0.10
moeda05 = int(auxiliar/0.05)
auxiliar = auxiliar % 0.05
moeda01 = int(round(auxiliar/0.01))
auxiliar = auxiliar % 0.01
print("NOTAS:")
print(f"{nota100} nota(s) de R$ 100.00")
print(f"{nota50} nota(s) de R$ 50.00")
print(f"{nota20} nota(s) de R$ 20.00")
print(f"{nota10} nota(s) de R$ 10.00")
print(f"{nota5} nota(s) de R$ 5.00")
print(f"{nota2} nota(s) de R$ 2.00")
print("MOEDAS:")
print(f"{moeda1} moeda(s) de R$ 1.00")
print(f"{moeda50} moeda(s) de R$ 0.50")
print(f"{moeda25} moeda(s) de R$ 0.25")
print(f"{moeda10} moeda(s) de R$ 0.10")
print(f"{moeda05} moeda(s) de R$ 0.05")
print(f"{moeda01} moeda(s) de R$ 0.01")
