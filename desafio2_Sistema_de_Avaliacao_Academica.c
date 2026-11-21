
#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, nota3;
    float media;
    float frequencia;

    printf("Digite o nome do aluno: ");
    scanf("%49s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a frequencia do aluno (0 a 100): ");
    scanf("%f", &frequencia);

    if (nota1 < 0 || nota1 > 10 ||
        nota2 < 0 || nota2 > 10 ||
        nota3 < 0 || nota3 > 10 ||
        frequencia < 0 || frequencia > 100) {

        printf("Valores invalidos!\n");

    } else {

        media = (nota1 + nota2 + nota3) / 3;

        printf("\nAluno: %s\n", nome);
        printf("Media: %.1f\n", media);
        printf("Frequencia: %.1f%%\n", frequencia);

        if (frequencia < 75) {
            printf("Situacao: Reprovado por frequencia.\n");
        }
        else if (media >= 7) {
            printf("Situacao: Aprovado!\n");
        }
        else if (media >= 5) {
            printf("Situacao: Recuperacao.\n");
        }
        else {
            printf("Situacao: Reprovado por nota.\n");
        }
    }

    return 0;
}
