#include <stdio.h>

// Função para limpar o lixo do teclado caso o usuário digite letras
void limpar_buffer() {
    while (getchar() != '\n');
}
//Função para a opção 1: cálculo de média
void calculo_media() {
    float nota1, nota2, media;
    printf("\n--- Calcular media ---\n");
    
    printf("Digite a nota 1: ");
    if (scanf("%f", &nota1) != 1) {
        printf("Erro: Entrada invalida! Use apenas numeros.\n");
        limpar_buffer();
        return;
    }
    
    printf("Digite a nota 2: ");
    if (scanf("%f", &nota2) != 1) {
        printf("Erro: Entrada invalida! Use apenas numeros.\n");
        limpar_buffer();
        return;
    }

    media = (nota1 + nota2) / 2; 
    printf("A sua media e: %.2f\n", media);
}

void verificarSituacao() {
    float nota1, nota2, media;
    printf("\n--- Verificar Situacao ---\n");
    
    printf("Digite a nota 1: ");
    if (scanf("%f", &nota1) != 1) {
        printf("Erro: Entrada invalida!\n");
        limpar_buffer();
        return;
    }
    
    printf("Digite a nota 2: ");
    if (scanf("%f", &nota2) != 1) {
        printf("Erro: Entrada invalida!\n");
        limpar_buffer();
        return;
    }

    media = (nota1 + nota2) / 2;
    if (media >= 6) printf("Voce foi aprovado!\n");
    else printf("Voce foi reprovado!\n");
}

void calcular_derivada() {
    float a, b, c;
    printf("\n--- Calcular Derivada (ax^2 + bx + c) ---\n");
    
    printf("Digite o valor de a: ");
    if (scanf("%f", &a) != 1) {
        printf("Erro: Entrada invalida!\n");
        limpar_buffer();
        return;
    }
    
    printf("Digite o valor de b: ");
    scanf("%f", &b); 
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("A derivada e: f'(x) = %.2fx + %.2f\n", 2 * a, b);
}

void menu() {
    printf("\n--- MENU da equipe ARM ---\n");
    printf("1-Calcular media\n");
    printf("2-Verificar situacao\n");
    printf("3-Calcular derivada\n");
    printf("4-Encerrar programa\n");
}

int main() { //menu da interface no Terminal
    int opcao;
    do {
        menu();
        printf("Escolha uma das opcoes: ");
        
        // Validação das opções
        if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Por favor, digite um numero de 1 a 4.\n");
            limpar_buffer();
            opcao = 0; // Reset para continuar no loop
            continue;
        }

        switch(opcao) {
            case 1: calculo_media(); break;
            case 2: verificarSituacao(); break;
            case 3: calcular_derivada(); break;
            case 4: printf("Programa encerrado.\n"); break;
            default: printf("Opcao Invalida.\n");
        }
    } while (opcao != 4);
    
    return 0;
}