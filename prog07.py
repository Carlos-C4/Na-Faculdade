# programa para calcular média ponderada do aluno

nome=input('Digite o nome do aluno(a): ') 
disciplina=input('Digite a disciplina: ')
ex=float(input('Digite a nota do exercício: '))
pt=float(input('Digite a nota do portfólio: '))
pr=float(input('Digite a nota da prova: '))
mf=(ex*20 + pt*30 + pr*50)/100
print(f'O aluno(a) {nome} na disciplina {disciplina} obteve a média {mf}')
