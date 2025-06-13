celular=[]
maior=0
for i in range(8):
    celular.append([0]*4)
for i in range(20):
    x,y=input().split()
    x,y=int(x),int(y)
    celular[x][y]+=1
for i in range(8):
    for j in range(4):
        if celular[i][j]>maior:
            maior=celular[i][j]
for i in range(8):
    for j    in range(4):
        if celular[i][j]==maior:
            print(f"{i} {j}")