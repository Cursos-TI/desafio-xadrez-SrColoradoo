#include <stdio.h>

// Funções recursivas
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Cavalo: L para cima e direita (2 cima + 1 direita)
void moverCavalo() {
    int i, j;

    printf("\nMovimentação do Cavalo (L para cima e direita):\n");

    for (i = 0; i < 2; i++) {
        if (i == 1) continue; // Exemplo de uso de continue
        printf("Cima\n");
    }

    for (j = 0; j < 2; j++) {
        if (j == 1) break; // Exemplo de uso de break
        printf("Direita\n");
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(5);

    printf("\nMovimentação da Torre:\n");
    moverTorre(5);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}
