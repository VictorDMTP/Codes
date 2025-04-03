soma = 0

for i in range(10):
   numero = float(input(f'escolha o {i+1} numero: '))
   soma += numero

   media = soma / (i+1)

   print(f"a soma apos  parcial é {soma}")
   print(f"a media de parcial é {media}\n")


print(f"soma é: {soma}")
print(f"a média dos 10 numeros é: {media}")