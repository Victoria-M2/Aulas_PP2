
#include <stdio.h>

int main(void) {

    char nome[100];
    int idade;
    float glicemia, hba1c;

    printf("Insira o nome do paciente: ");
    scanf("%s", nome);

    printf("Insira a idade do paciente: ");
    if (scanf("%d", &idade) != 1 || idade <= 0) {
        printf("Idade invalida!\n");
        return 0;
    }

    printf("Insira o resultado da glicemia de jejum (mg/dL): ");
    if (scanf("%f", &glicemia) != 1 || glicemia < 0) {
        printf("Valor de glicemia invalido!\n");
        return 0;
    }

    printf("Insira o resultado da hemoglobina glicada (HbA1c): ");
    if (scanf("%f", &hba1c) != 1 || hba1c < 0 || hba1c > 100) {
        printf("Valor de HbA1c invalido!\n");
        return 0;
    }

    
    printf("\n ...RESULTADO DA GLICEMIA... \n");

    if (glicemia < 100) {
        printf("Classificacao: Normal\n");

    } else if (glicemia <= 125) {
        printf("Classificacao: Pre-diabetes\n");

    } else {
        printf("Classificacao: Diabetes\n");
    }

    
    printf("\n ...RESULTADO DA HbA1c... \n");

    if (hba1c < 5.7) {
        printf("Classificacao: Normal\n");

    } else if (hba1c <= 6.4) {
        printf("Classificacao: Pre-diabetes\n");

    } else {
        printf("Classificacao: Diabetes\n");
    }

    
    printf("\n--- CLASSIFICACAO GERAL ---\n");

    if (glicemia >= 126 || hba1c >= 6.5) {
        printf("Classificacao geral: Diabetes\n");

    } else if ((glicemia >= 100 && glicemia <= 125) ||
               (hba1c >= 5.7 && hba1c <= 6.4)) {
        printf("Classificacao geral: Pre-diabetes\n");

    } else {
        printf("Classificacao geral: Normal\n");
    }

    return 0;
}
