#include <stdio.h>

int main() {
    int numeros[10];
    int crescente = 1;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 9; i++) {
        if (numeros[i] > numeros[i + 1]) {
            crescente = 0;
        }
    }

    if (crescente == 1) {
        printf("O vetor esta em ordem crescente.\n");
    } else {
        printf("O vetor nao esta em ordem crescente.\n");
    }

    return 0;
}
