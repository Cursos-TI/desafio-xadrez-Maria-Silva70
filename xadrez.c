#include <stdio.h>

int main() {
    // Movimento da TORRE: 5 casas para a direita (usando for)
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    // Movimento do BISPO: 5 casas na diagonal para cima e à direita (usando while)
    printf("\n=== Movimento do Bispo ===\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita (%d)\n", j);
        j++;
    }

    // Movimento da RAINHA: 8 casas para a esquerda (usando do-while)
    printf("\n=== Movimento da Rainha ===\n");
    int k = 1;
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
