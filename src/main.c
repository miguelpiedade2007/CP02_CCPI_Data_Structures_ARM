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

void menu() {
    printf("---MENU da equipe ARM---\n");
    printf("1-Calcular media\n");
    printf("2-Verificar situacao\n");
    printf("3-Calcular derivada\n");
    printf("4-Encerrar programa\n");
}

int main() {
//menu da interface no CMD
int opcao;
menu();
printf("Escolha uma das opcoes: ");
scanf("%d", &opcao);
    return 0;
}

