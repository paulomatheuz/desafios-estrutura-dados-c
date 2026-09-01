#include <stdio.h>

int main() {
    int numeros[10];
    int maior;
    int segundoMaior;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    if (numeros[0] > numeros[1]) {
        maior = numeros[0];
        segundoMaior = numeros[1];
    } else {
        maior = numeros[1];
        segundoMaior = numeros[0];
    }

    for (int i = 2; i < 10; i++) {
        if (numeros[i] > maior) {
            segundoMaior = maior;
            maior = numeros[i];
        } else if (numeros[i] > segundoMaior) {
            segundoMaior = numeros[i];
        }
    }

    printf("Segundo maior valor: %d\n", segundoMaior);

    return 0;
}
