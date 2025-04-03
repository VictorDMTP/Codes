soma = 0

for i in range(10):
   numero = float(input(f'escolha o {i+1} numero: '))
   soma += numero

media = soma / 10

print(f'soma é: {soma}')
print(f'a média dos 10 numeros é: {media}')
