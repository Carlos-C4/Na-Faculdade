import matplotlib.pyplot as plt #Aqui eu importo a biblioteca matplotlib.pyplot
import numpy as np

#Criação de um grafico sobre idades 
idades = np.random.randint(0, 61, 140)

# Histograma
plt.hist(idades, bins=10, edgecolor='black')  # 10 bins para o histograma

# Rótulos e título
plt.xlabel('Idade')
plt.ylabel('Número de Pessoas')
plt.title('Histograma de Idades')

# Para mostrar o gráfico basta usar esse comando
plt.show()
