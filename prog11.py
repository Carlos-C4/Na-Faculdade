#solicitar três números e exibir o maior
n1=float(input('Digite o primeiro número: '))
n2=float(input('Digite o segundo número: '))
n3=float(input('Digite o terceiro número: '))

if (n1==n2==n3):
    print('os números são iguais')
elif (n1>=n2) and (n1>=n3):
      maior=n1
elif (n2>=n1) and (n2>=n3):
      maior=n2
else:
     maior=n3
print(f'O maior número é {maior}')
