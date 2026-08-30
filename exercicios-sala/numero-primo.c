#include <stdio.h>

int main() {
    int numero;
    int divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O numero eh primo!");
    } else {
        printf("O numero nao eh primo!");
    }

    return 0;
}
