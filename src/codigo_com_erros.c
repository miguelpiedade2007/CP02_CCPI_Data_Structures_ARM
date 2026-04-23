#include <stdio.h> // Erro na estrutura "stdio.h"

int main() {
    float nota1, nota2, media; // Erro na declaração das variaveis, "float nota1, nota2, media"

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Falta do "&" em "nota2"

    media = (nota1 + nota2) / 2; // Falta do parenteses na expressão "nota1 + nota2 / 2"

    if (media >= 6) { //Falta do ">" na condição "media = 6"

        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}