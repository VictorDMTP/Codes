soma = 0

# Loop para pedir 10 números e somá-los
for i in range(10):
    numero = float(input(f"Digite o {i+1}º número: "))
    soma += numero

# Calculando a média
media = soma / 10

# Exibindo o resultado
print(f"A soma dos 10 números é: {soma}")
print(f"A média dos 10 números é: {media}")