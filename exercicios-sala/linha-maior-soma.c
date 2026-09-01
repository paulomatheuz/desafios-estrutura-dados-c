#include <stdio.h>

int main() {
    int matriz[3][3];
    int maiorSoma;
    int linhaMaior = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        int soma = 0;

        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }

        if (i == 0 || soma > maiorSoma) {
            maiorSoma = soma;
            linhaMaior = i;
        }
    }

    printf("Linha com maior soma: %d\n", linhaMaior);
    printf("Maior soma: %d\n", maiorSoma);

    return 0;
}
