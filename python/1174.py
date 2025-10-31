vetor=[0]*100
for i in range(len(vetor)):
    vetor[i]=float(input())
for i in range(len(vetor)):
    if vetor[i] <= 10:
        print(f"A[{i}] = {vetor[i]}")   