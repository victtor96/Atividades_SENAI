#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int vetor[3],media=0;
    printf("Programa que calcula a media de tres numeros.\n");
    for (int i =0;i<3;i++){
        printf("Vetor %d: ", i);
        scanf("%d",&vetor[i]);
        media += vetor[i];
    }
    
    media = (media/3);
    
    
    printf("Media = %d", media);
    
    
    
    
    
    return 0;
}