vetor=[0]*10
for i in range(len(vetor)):
    vetor[i]=int(input())
    if vetor[i]<=0:
        vetor[i]=1
for i in range(len(vetor)):
    print(f"X[{i}] = {vetor[i]}")