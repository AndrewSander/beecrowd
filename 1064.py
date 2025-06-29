lista=[]
for i in range(6):
    num=float(input())
    if num > 0:
        lista.append(num)
soma=sum(lista)
positivos=len(lista)
media=soma/len(lista)
print(f"{positivos} valores positivos")
print(f"{media:.1f}")