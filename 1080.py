lista=[]
for i in range(100):
    lista.append(int(input()))
maior=max(lista)
indice=lista.index(maior)
print(maior)
print(indice + 1)