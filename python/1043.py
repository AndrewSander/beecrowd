lado1,lado2,lado3=input().split()
lado1,lado2,lado3=float(lado1),float(lado2),float(lado3)
lado_maior=0
triangulo=False
area=((lado1+lado2)*lado3)/2
perimetro= lado1 + lado2 + lado3
if lado1 > lado2 and lado1 > lado3:
    lado_maior=lado1
elif lado2 > lado1 and lado2 > lado3:
    lado_maior=lado2
else:
    lado_maior=lado3

if (lado1 + lado2 + lado3 - lado_maior) > lado_maior:
    triangulo = True
else:
    tringulo=False
if triangulo:
    print(f"Perimetro = {perimetro:.1f}")
if not triangulo:
    print(f"Area = {area:.1f}")
