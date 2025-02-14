# Entrar com 3 números e exibir o maior e o menor
n1=float(input('Digite primeiro número: '))
n2=float(input('Digite segundo número: '))
n3=float(input('Digite terceiro número: '))

# verificar igualdade dos números

if n1==n2==n3:
    print('Os números são iguais !!')
    
else:
    maior = max(n1,n2,n3)
    menor = min(n1,n2,n3)

    # exibir o resultado

    print(' O maior número é ',maior)
    print(' O menor número é ',menor)
