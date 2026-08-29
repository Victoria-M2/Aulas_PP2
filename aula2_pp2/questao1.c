#include <stdio.h>

int main(){

    char nome[20];
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Ola, %s! Seja bem-vindo(a) a disciplina de Logica de Programacao", nome);
    return 0;
}