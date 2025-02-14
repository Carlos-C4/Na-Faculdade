n1=int(input('Digite o primeiro número: '))
n2=int(input('Digite o segundo número: '))
n3=int(input('Digite o terceiro número: '))
if (n1==n2) and (n1==n3):
    print('os números são iguais')
if (n1>n2) and (n1>n3):
    print('o primeiro número é maior')
if (n2>n1) and (n2>n3):
    print('o segundo número é maior')
if (n3>n1) and (n3>n2):
    print('o terceiro número é maior')
if (n1==n2) and (n3<n1):
    print('o primeiro e segundo são maiores')
if (n2==n3) and (n1<n2):
    print('o segundo e o terceiro são maiores')
if (n3==n1) and (n2<n3):
    print('o primeiro e o terceiro são maiores')
