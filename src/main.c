#include<stdio.h>

//Função para a opção 1: cálculo de média
void calculo_media() {
    float nota1, nota2, media;
    printf("--- Calcular media ---\n");
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2; 
    printf("A sua media e: %.2f\n", media);

}

void verificarSituacao(){
    float nota1, nota2, media;
    printf("---Verificar se o aluno foi aprovado---\n");
    printf("digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);


    media = (nota1 + nota2)/2;
    if (media >= 6){
        printf("Voce foi aprovado!\n");
    }
    else{
        printf("Voce foi reprovado!\n");
    }
}

void menu() {
    printf("---MENU da equipe ARM---\n");
    printf("1-Calcular media\n");
    printf("2-Verificar situacao\n");
    printf("3-Calcular derivada\n");
    printf("4-Encerrar programa\n");
}

int main() {
    //menu da interface no Terminal
    int opcao;
    menu();
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        calculo_media();

        break;
        case 2:
        verificarSituacao();

        break;
        case 3:
        // Vazio até a criação da função de calcular derivada.

        break;
        case 4:
        printf("Programa encerrado.");

        break;
        default: printf("Opcao Invalida.");
    }
    return 0;
}

