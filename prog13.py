# Calcular o IMC
# se o IMC < 18.5 abaixo do peso normal
# se o IMC 18.5 - 24.9 peso normal
# se o IMC 25 - 29.9 excesso de peso
# se o IMC 30 - 34.9 obesidade classe I
# se o IMC 35 - 39.9 obesidade classe II
# se o IMC >= 40 obesidade classe III
# fórmula para calcular o IMC : peso/(altura*altura)

# entrar com o peso e altura

peso=float(input('Digite seu peso: '))
altura=float(input('Digite sua altura: '))

# calcular o IMC

imc = peso / (altura*altura) #(altura**2)

# exibir os resultados

if imc < 18.5:
    print('Você está abaixo do peso!!')
else:
    if imc >=18.5 and imc <=24.9:
       print('Seu peso está normal !!')
    else:
        if imc >=25 and imc <=29.9:
            print('excesso de peso!!')
        else:
            if imc >=30 and imc <=34.9:
                print('obesidade classe I')
            else:
                if imc >=35 and imc <=39.9:
                  print('obesidade classe II')
                else:
                    print('obesidade classe III')
print('\n\nfim do progrma!!')
