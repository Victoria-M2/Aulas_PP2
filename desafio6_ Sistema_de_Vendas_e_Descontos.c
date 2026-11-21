
#include <stdio.h>

int main() {
    char produto[50];
    float preco, subtotal;
    float desconto, economia, total;
    int quantidade;

    printf("Digite o nome do produto: ");
    scanf("%49s", produto);

    printf("Digite o preco unitario: R$ ");
    scanf("%f", &preco);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (preco <= 0 || quantidade <= 0) {
        printf("\nValores invalidos!\n");
    }
    else {
        subtotal = preco * quantidade;

        if (subtotal < 100) {
            desconto = 0;
        }
        else if (subtotal < 300) {
            desconto = 5;
        }
        else {
            desconto = 10;
        }

        economia = subtotal * desconto / 100;
        total = subtotal - economia;

        printf("\nProduto: %s\n", produto);
        printf("Subtotal: R$ %.2f\n", subtotal);
        printf("Desconto: %.0f%%\n", desconto);
        printf("Valor economizado: R$ %.2f\n", economia);
        printf("Total a pagar: R$ %.2f\n", total);
    }

    return 0;
}
