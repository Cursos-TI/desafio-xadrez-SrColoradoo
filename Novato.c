#include <stdio.h>

// Constantes para os movimentos
#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

int main() {
    int i;

    // Bispo: For (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre: While (direita)
    printf("\nMovimentação da Torre:\n");
    i = 0;
    while (i < TORRE_PASSOS) {
        printf("Direita\n");
        i++;
    }

    // Rainha: Do-while (esquerda)
    printf("\nMovimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_PASSOS);

    return 0;
}
