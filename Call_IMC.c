#include<stdio.h>
#include<stdlib.h> 
#include<locale.h> //biblioteca para acento na mensagam
int main(){
    
    float peso, altura;
    float resultado_imc;
    
    setlocale(LC_ALL,"portuguese");
    printf("Informe seu peso (kg) :  peso = ");
    scanf("%f",&peso);
    printf("Informe a sua altura (m) :  altura = ");
    scanf("%f",&altura);
    resultado_imc = peso/(altura * altura) ;
    printf("O resultado do seu IMC = %.2f\n",resultado_imc);
    
    system("pause");
    return 0;
}
