#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int soma_sequencia(int n); //declaração de um subprograma
//programa principal
int main(){	
	int n;
	setlocale(LC_ALL,"portuguese");
	printf("Informe um número inteiro n para somar a seqüencia de 1 a n: n = ");
	scanf("%d",&n);
	printf("O resultado da soma = %d\n",soma_sequencia(n));	
	system("pause");
	return 0;
}
//subprograma: função
int soma_sequencia(int n){
	int cont = 1; //variável local
	int soma = 0; 
	while (cont <= n){
		soma += cont; //soma = soma + cont;
		cont++; //atualizar cont
	}
	return soma;
}
