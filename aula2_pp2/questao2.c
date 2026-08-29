#include <stdio.h>

int main() {
    float numero1, numero2, soma;

    printf("Digite um numero: ");
    scanf("%f", &numero1);

    printf("Digite outro numero: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;

    printf("A soma dos dois numeros e: %f", soma);

}