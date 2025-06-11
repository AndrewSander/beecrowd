coluna=int(input())
operacao=input()
matriz=[]
soma=0
for i in range(12):
        matriz.append([0]*12)
for i in range(12):
    for j in range(12):
        matriz[i][j]=float(input())
for j in range(12):
     if j == (coluna):
        for i in range(12):
             soma+=matriz[i][j]
media=soma/12
if operacao=="S":
     print(f"{soma:.1f}")
if operacao=="M":
     print(f"{media:.1f}")