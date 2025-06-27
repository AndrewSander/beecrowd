num1,num2 = input().split()
num1,num2 = int(num1),int(num2)
duracao = 0
if num1 > num2:
    duracao= 24 + num2 - num1
elif num2 > num1:
    duracao= num2 - num1
else:
    duracao=24
print(f"O JOGO DUROU {duracao} HORA(S)")
