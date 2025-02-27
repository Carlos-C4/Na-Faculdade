#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//declaração de um subprograma (função)
int soma_seq(int n); 
int soma_recursivo(int n);
//programa principal
int main(){
    int n, soma;
    setlocale(LC_ALL,"portuguese");
    printf("Informe um número inteiro: n = ");
    scanf("%d",&n);
    //soma = soma_seq(n);
    soma = soma_recursivo(n);
    printf("O resultado da soma de 1 a %d = %d\n",n,soma);    
    system("pause");
    return 0;
}
//subprograma como uma função: um valor
int soma_seq(int n){
   int cont, soma; //variáveis localis
   cont = 1; soma = 0;
   while(cont<=n){
     soma += cont; //soma = soma + cont;
     cont++;
   }
   return soma; //retornar resultado da soma 
}
//algoritmo recursivo
int soma_recursivo(int n){
    
    if (n == 1)
       return 1; //ponto de parada
    else 
       return soma_recursivo(n-1) + n;   
}
