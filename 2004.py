brasileirao=[]
for i in range(38):
    brasileirao.append([0,0])
for i in range(38):
    vermelho=0
    amarelo=0
    for j in range(20):
        amarelo,vermelho=input().split()
        amarelo,vermelho=int(amarelo), int(vermelho)
        brasileirao[i][0]+=amarelo
        brasileirao[i][1]+=vermelho
for i in range(38):
    print(f"{brasileirao[i][0]} {brasileirao[i][1]}")