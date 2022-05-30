#include <stdlib.h>
#include <stdio.h>

int main(){

  char nome[20],endere[100],telefone[20];

  printf("Digite o Nome: \n");
  gets(nome);
  printf("Digite o Telefone: \n");
  gets(telefone);
  printf("Digite o Endereco: \n");
  gets(endere);

  printf("\n\nNome: %s\n", nome);
  printf("Telefone: %s\n", telefone);
  printf("Endereco: %s\n", endere);

    return 0;
}