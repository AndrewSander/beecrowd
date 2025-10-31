lista=[]
soma=0
for i in range(2):
    lista.append(int(input()))
lista.sort()
for i in range(lista[0]+1,lista[1]):
    if i % 2 != 0:
        soma+=i
print(soma)