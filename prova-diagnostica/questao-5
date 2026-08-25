/*
Questão 7: Verificação de Matriz Simétrica

Faça um programa que leia uma matriz 3x3 e verifique se a mesma
é uma matriz simétrica.
*/

#include <stdio.h>

int main() {
    int matriz[3][3];
    int simetrica = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0;
            }
        }
    }

    if (simetrica == 1) {
        printf("\nA matriz e simetrica.\n");
    } else {
        printf("\nA matriz nao e simetrica.\n");
    }

    return 0;
}
