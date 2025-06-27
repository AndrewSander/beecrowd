#ESSE CÓDIGO AINDA ESTÁ EM DESENVOLVIMENTO
campo=[]
bomb=0
for i in range(4):
    campo.append([0]*6)

bombas=int(input())

for i in range(bombas):
    l,c=input().split()
    l,c=int(l)-1,int(c)-1
    campo[l][c] = 1

x,y=input().split()
x,y=int(x)-1,int(y)-1
for i in range(4):
    for j in range(6):
        if i==x and j==y:
            if campo[i][j]==1:
                print("B")
                break
            if campo[i][j+1]==1:
                bomb+=1
            if campo[i][j-1]==1:
                bomb+=1
            if campo[i+1][j]==1:
                bomb+=1
            if campo[i-1][j]==1:
                bomb+=1
            if campo[i-1][j-1]==1:
                bomb+=1
            if campo[i-1][j+1]==1:
                bomb+=1
            if campo[i+1][j-1]==1:
                bomb+=1
            if campo[i+1][j+1]==1:
                bomb+=1
            if bomb!=0:
                print(bomb)
            else:
                print("X")