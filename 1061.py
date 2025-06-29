null,dia=input().split()
dia=int(dia)
hora,minuto,segundo=map(int,input().split(" : "))

null,dia2=input().split()
dia2=int(dia2)
hora2,minuto2,segundo2=map(int,input().split(" : "))

segundos1=dia*86400 + hora*3600 + minuto*60 + segundo
segundos2=dia2*86400 + hora2*3600 + minuto2*60 + segundo2

diferenca = segundos2 - segundos1

dia= diferenca // 86400
hora= (diferenca % 86400)//3600
minuto= ((diferenca% 86400)%3600)//60
segundo=((diferenca%86400)%3600)%60

print(f"{dia} dia(s)")
print(f"{hora} hora(s)")
print(f"{minuto} minuto(s)")
print(f"{segundo} segundo(s)")
