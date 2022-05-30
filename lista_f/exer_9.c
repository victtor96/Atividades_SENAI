#include <stdlib.h>
#include <stdio.h>

void salario_f(float salario, char nome[100], int escolaridade);

int main(){
    float salario_bruto;
    char nome[100];
    int escolaridade;

    printf("Calculadora de salarios.\n");
    printf("Digite o nome do funcionario: ");
    gets(nome);
    for(;escolaridade>3 || escolaridade<1;){
    printf("\nSelecione a escolaridade do funcionario:\n 1 - Ensino fundamental.\n 2 - Ensino medio.\n 3 - Ensino Superior.\n Selecione a sua opcao: ");
    scanf("%d", &escolaridade);
    if(escolaridade>3 || escolaridade<1){
        printf("Valor incorreto, Digite novamente!!");
    }
    }
    printf("\nDigite o salario bruto do funcionario: ");
    scanf("%f", &salario_bruto);
    salario_f(salario_bruto,nome,escolaridade);


return 0;
}

void salario_f(float salario, char nome[100], int escolaridade){
    float salario_final;
    salario_final = (salario-(salario*0.05));
    
    if(escolaridade == 1){
        salario_final = salario_final + 200;
    }
    else if (escolaridade == 2){
        salario_final = salario_final + 400;
    }
    else if (escolaridade == 3){
        salario_final = salario_final + 800;
    }

    printf("\nO funcionario %s\nTem o salario liquido de: R$ %.2f", nome, salario_final);

}