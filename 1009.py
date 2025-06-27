name=input()
salario_fixo=float(input())
vendas_mes=float(input())
salario_final= salario_fixo + 0.15*vendas_mes
print(f"TOTAL = R$ {salario_final:.2f}")
