#include <stdio.h>

int main(void) {

    char nome[100];
    float energia, valor, tarifa;

    printf("Insira seu nome: ");
    scanf("%s", nome);
    printf("Insira sua quantidade de energia consumida no mes em kWh:   \n");
    if (scanf("%f", &energia) != 1 || energia < 0)
    {
    printf("Valor invalido!\n");
    return 0;
    }

    if (energia <= 100)
    {
        tarifa = 0.60;
        valor = energia * tarifa;

    } else if (energia <= 200)
    {
        tarifa = 0.75;
        valor = energia * tarifa;

    } else{
        tarifa = 0.90;
        valor = energia * tarifa;
    }

    printf("Senhor(a) %s seu consumo de energia foi de %.2f kWh", nome, energia);
    printf(" por isso sua tarifa foi de %.2f R$ e seu valor total foi de %.2f R$.", tarifa, valor);
    

    return 0;
}