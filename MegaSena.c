#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h> //a biblioteca para gerar um número aleatório
/* gerar uma sequncia de núemros inteiros de  1 a n 
   Onde n é digitado por usuário   */
void gerarNumeros(int tam); //declaração de um subprograma
//programa principal
int main(){
   
   int n; 
   
   setlocale(LC_ALL,"portuguese");
   srand(time(NULL)); //semente para gerar números aleatórios
   printf("Informe o número de megaSena você pretende gerar:  ");
   scanf("%d",&n);
   printf("Os %d números de megaSena gerados:\n",n);   
   gerarNumeros(n); //chamando subprograma para trabalhar
   printf("\n");    
   printf("Fim do programa!!\n"); 
   system("pause");
   return 0; 
}

//subprograma
/* void - vazia: nao retorne um valor  
   tam - um parâmetro: para receber os dados de fora */
void gerarNumeros(int tam){
   int cont, num; //variáveis locais
    //gerar uma sequencia de números de 1 a n
   for (cont = 1; cont <= tam; cont++){
      num = 1 + rand()%60; //rand()%60 - gerar um número aleatório de 0 a 59   
      printf("%d ",num);     
   }
}
