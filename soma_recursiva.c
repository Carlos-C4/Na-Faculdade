#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int soma_recursivo(int n); //declara��o de um subprograma
//programa principal
int main(){	
	int n;
	setlocale(LC_ALL,"portuguese");
	printf("Informe um n�mero inteiro n para somar a seq�encia de 1 a n: n = ");
	scanf("%d",&n);
	printf("O resultado da soma = %d\n",soma_recursivo(n));	
	system("pause");
	return 0;
}
//subprograma: fun��o
/* Exemplo : se n = 6, resultado da soma = 1+2+3+4+5+6 = 21 */
int soma_recursivo(int n){
	if (n == 1){
		return 1;
	}
	else {
		return soma_recursivo(n-1) + n ;
	}
}
