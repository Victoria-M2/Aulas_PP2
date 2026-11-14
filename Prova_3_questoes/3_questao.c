
#include <stdio.h>

int main(void) {

    int ocupadas = 0, livres = 0;
    int vaga = 0;
    int estado;

    char estacionamento[2][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'}
    };

    while (vaga < 6)
    {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 3; j++) {
                printf(" %c ", estacionamento[i][j]);

                if(j < 2) {
                    printf("|");
                }
            }

            printf("\n");

            if (i < 1) {
                printf("---|---|---\n");
            }
        }

        printf("\nInforme se a vaga %d esta livre ou ocupada.\n", vaga + 1);
        printf("Digite 0 para livre e 1 para ocupada: ");

        if (scanf("%d", &estado) != 1 || (estado != 0 && estado != 1)) {
            printf("Valor invalido!\n");
            return 0;
        }

        estacionamento[vaga / 3][vaga % 3] = estado + '0';

        if (estado == 1) {
            ocupadas++;
        } else {
            livres++;
        }

        vaga++;
        printf("\n");
    }

    printf("\n--- RESULTADO FINAL ---\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf(" %c ", estacionamento[i][j]);

            if(j < 2) {
                printf("|");
            }
        }
        printf("\n");
    }

    printf("\nVagas ocupadas: %d\n", ocupadas);
    printf("Vagas livres: %d\n", livres);

    return 0;
}

    

