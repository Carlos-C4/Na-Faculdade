/* Este programa recebe o salário bruto atual de um funcionário e calcular 
  o novo salario bruto com aumento de acordo com a faixa salarial e 
  mostre o salario liquido a receber sabendo imposto a pagar 20.5%.
------------------------------------------------------------------------
 | para salario <= 3000.0 o aumento: 15.45%                         |
------------------------------------------------------------------------
 | para salario > 3000.0, mas o salario <= 5500.0 o aumento: 10.15% |
------------------------------------------------------------------------
 | para salario > 5500.0 o aumento: 7.5%                            |  
-----------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
   
   float sal_atual, sal_novo, sal_liquido, aumento, imposto;
   setlocale(LC_ALL,"portuguese"); //para usar acentos
   printf("Informe seu salário atual R$ ");
   scanf("%f",&sal_atual);
   imposto = (20.5/100)*sal_atual;
   sal_liquido = sal_atual - imposto;
   printf("Seu salario liquido atual = %.2f\n",sal_liquido); 
   
   if (sal_atual <= 3000.0){
       aumento = (15.45/100)*sal_atual;
       sal_novo = sal_atual + aumento;
   }
   else{// sal_atual > 3000.0
         if (sal_atual <= 5500.0){
            aumento = (10.15/100)*sal_atual;
            sal_novo = sal_atual + aumento; 
         }
         else {// sal_atual > 5500.0
            aumento = (7.5/100)*sal_atual;
            sal_novo = sal_atual + aumento; 
         }   
   }
   printf("Seu salario bruto com aumento = %.2f\n",sal_novo);
   imposto = (20.5/100)*sal_novo;
   sal_liquido = sal_novo - imposto;
   printf("Seu salario liquido com aumento = %.2f\n",sal_liquido);   
    
   system("pause"); 
   return 0;   
}
