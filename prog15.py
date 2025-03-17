import matplotlib.pyplot as plt

def criar_grafico_pizza():
    """
    Solicita dados ao usuário e cria um gráfico de pizza.
    """

    categorias = []
    valores = []

    num_categorias = int(input("Digite o número de categorias para o gráfico de pizza: "))

    for i in range(num_categorias):
        categoria = input(f"Digite o nome da categoria {i+1}: ")
        valor = float(input(f"Digite o valor para a categoria {categoria}: "))
        categorias.append(categoria)
        valores.append(valor)

    # Aqui é os comandos para criar o gráfico de pizza
    plt.pie(valores, labels=categorias, autopct='%1.1f%%', startangle=90)
    plt.axis('equal')  # Para garantir que a pizza seja um círculo
    plt.title('Gráfico de Pizza')
    plt.show()

# Para chamar a função de criar o gráfico ultilizaremos:
criar_grafico_pizza()
