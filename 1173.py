vetor=[0]*10
valor=int(input())
vetor[0]=valor
for i in range(len(vetor)):
    if i != 0:
        vetor[i]=vetor[i-1] * 2
for i in range(len(vetor)):
    print(f"N[{i}] = {vetor[i]}")