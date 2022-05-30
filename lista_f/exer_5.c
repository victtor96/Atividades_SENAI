#include <stdlib.h>
#include <stdio.h>

int main(){
 int soma=0,vetor[5];
 printf("Programa que soma o valores de todos os vetores.\n");
 
 for (int i =0;i<5;i++){
        printf("Vetor %d: ", i);
        scanf("%d",&vetor[i]);
        soma += vetor[i];
    }


  printf("soma = %d", soma);









   return 0;
}