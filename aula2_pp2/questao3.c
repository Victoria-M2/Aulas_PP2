#include <stdio.h>

int main() {
    float numero1, numero2, soma, subtracao, multiplicacao, divisao;

    printf("Digite um numero: ");
    scanf("%f", &numero1);

    printf("Digite outro numero: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("A soma dos dois numeros e: %f\n", soma);
    printf("A subtracao dos dois numeros e: %f\n", subtracao);
    printf("A multiplicacao dos dois numeros e: %f\n", multiplicacao);
    printf("A divisao dos dois numeros e: %f\n", divisao);
}