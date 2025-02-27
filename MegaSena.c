#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h> //a biblioteca para gerar um n�mero aleat�rio
/* gerar uma sequncia de n�emros inteiros de  1 a n 
   Onde n � digitado por usu�rio   */
void gerarNumeros(int tam); //declara��o de um subprograma
//programa principal
int main(){
   
   int n; 
   
   setlocale(LC_ALL,"portuguese");
   srand(time(NULL)); //semente para gerar n�meros aleat�rios
   printf("Informe o n�mero de megaSena voc� pretende gerar:  ");
   scanf("%d",&n);
   printf("Os %d n�meros de megaSena gerados:\n",n);   
   gerarNumeros(n); //chamando subprograma para trabalhar
   printf("\n");    
   printf("Fim do programa!!\n"); 
   system("pause");
   return 0; 
}

//subprograma
/* void - vazia: nao retorne um valor  
   tam - um par�metro: para receber os dados de fora */
void gerarNumeros(int tam){
   int cont, num; //vari�veis locais
    //gerar uma sequencia de n�meros de 1 a n
   for (cont = 1; cont <= tam; cont++){
      num = 1 + rand()%60; //rand()%60 - gerar um n�mero aleat�rio de 0 a 59   
      printf("%d ",num);     
   }
}
