operacao=input()
matriz=[]
soma=0
cont=0
for i in range(12):
        matriz.append([0]*12)
for i in range(12):
    for j in range(12):
        matriz[i][j]=float(input())
for i in range(12):
    for j in range(12):
            if i < j:
                soma+=matriz[i][j]
                cont+=1
media=soma/cont
if operacao=="S":
     print(f"{soma:.1f}")
if operacao=="M":
     print(f"{media:.1f}")