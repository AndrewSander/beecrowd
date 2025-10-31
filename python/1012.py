num1,num2,num3=input().split()
num1,num2,num3=float(num1),float(num2),float(num3)
raio=num3
pi=3.14159
triangulo_retangulo=(num1*num3)/2
circulo=pi*raio**2
trapezio=((num1 + num2)*num3)/2
quadrado=num2**2
retangulo=num1*num2
print(f"TRIANGULO: {triangulo_retangulo:.3f}")
print(f"CIRCULO: {circulo:.3f}")
print(f"TRAPEZIO: {trapezio:.3f}")
print(f"QUADRADO: {quadrado:.3f}")
print(f"RETANGULO: {retangulo:.3f}")