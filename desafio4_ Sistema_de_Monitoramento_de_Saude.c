
#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float peso, altura;
    float imc;

    printf("Digite o nome do paciente: ");
    scanf("%49s", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if (idade < 0 || peso <= 0 || altura <= 0) {
        printf("\nValores invalidos!\n");
    }
    else {
        printf("\nPaciente: %s\n", nome);
        printf("Idade: %d anos\n", idade);

        if (idade < 18) {
            printf("A classificacao do IMC apresentada e valida apenas para adultos.\n");
        }
        else {
            imc = peso / (altura * altura);

            printf("IMC: %.2f\n", imc);

            if (imc < 18.5) {
                printf("Classificacao: Baixo peso.\n");
            }
            else if (imc < 25) {
                printf("Classificacao: Peso adequado.\n");
            }
            else if (imc < 30) {
                printf("Classificacao: Sobrepeso.\n");
            }
            else {
                printf("Classificacao: Obesidade.\n");
            }
        }

        printf("\nAviso: O IMC e apenas uma medida de triagem e nao constitui diagnostico.\n");
    }

    return 0;
}
