#Exercicio 1009 URI "Salário com Bônus"
#Tags: Calculo salario, iniciante

nome=input()
salario_fixo=float(input())
total_vendas=float(input())

TOTAL = (total_vendas * 0.15) + salario_fixo

print('TOTAL = R$ %0.2f' %TOTAL)