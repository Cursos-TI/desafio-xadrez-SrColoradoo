#include <stdio.h>

int main() {
    int i, j;

    printf("\nMovimentação do Cavalo (em L):\n");

    // 2 para baixo (loop externo)
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // 1 para esquerda (loop interno com while)
    j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
