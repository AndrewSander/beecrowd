code, qtd=input().split()
code, qtd=int(code),int(qtd)
preco=0.00
if code ==1:
    preco=4.0*qtd
elif code==2:
    preco=4.50*qtd
elif code==3:
    preco=5.0*qtd
elif code==4:
    preco=2.0*qtd
elif code==5:
    preco=1.50*qtd
print(f"Total: R$ {preco:.2f}")