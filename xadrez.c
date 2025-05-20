#include <stdio.h>

// Camila Lins, curso de ADS, Estácio, 2025.1.

int main() {
    // Quantidade de casas a percorrer por cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // TORRE
    // Movimento: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("0%d: Direita\n", (i+1));
    }

    // BISPO
    // Movimento: 5 casas para a diagonal superior direita
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("0%d: Diagonal direita (cima & direita)\n", (j+1));
        j++;
    }

    // RAINHA
    // Movimento: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("0%d: Esquerda\n", (k+1));
        k++;
    } while (k < casasRainha);

    return 0;
}
