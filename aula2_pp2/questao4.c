#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Sua nota N1 e: ");
    scanf("%f", &n1);
    printf("Sua nota N2 e: ");
    scanf("%f", &n2);
    printf("Sua nota N3 e: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Sua media e: %f", media);
}