#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	//Declara��o de veri�veis
	float medFix, portf, prova;
	float med_final;
	char nome[40], disp[50];
	
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Informe o nome da disciplina: ");
	gets(disp);
	printf("Informe a nota m�dia dos exerc�cios de fixa��o: ");
	scanf("%f",&medFix);
	printf("Informe a nota do portf�lio: ");
	scanf("%f",&portf);
	printf("Informe a nota da prova elet�nica: ");
	scanf("%f",&prova);
	//opera��o de c�lculo
	med_final = medFix * 0.20 + portf * 0.30 + prova * 0.50 ;
	printf("%s, sua nota m�dia final para disciplina %s = %.2f\n",nome, disp,med_final);	
	
	system("pause");
	return 0;
}
