vetor = []

for i in range(0,5):
  number = int(input("Digite o valor %d "% i))
  vetor.append(number)
valor_maximo = 0

for num in vetor:
    if (valor_maximo is None or num > valor_maximo):
        valor_maximo = num

print('Maior valor:', valor_maximo)