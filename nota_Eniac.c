#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	//Declaração de veriáveis
	float medFix, portf, prova;
	float med_final;
	char nome[40], disp[50];
	
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Informe o nome da disciplina: ");
	gets(disp);
	printf("Informe a nota média dos exercícios de fixação: ");
	scanf("%f",&medFix);
	printf("Informe a nota do portfólio: ");
	scanf("%f",&portf);
	printf("Informe a nota da prova eletônica: ");
	scanf("%f",&prova);
	//operação de cálculo
	med_final = medFix * 0.20 + portf * 0.30 + prova * 0.50 ;
	printf("%s, sua nota média final para disciplina %s = %.2f\n",nome, disp,med_final);	
	
	system("pause");
	return 0;
}
