#include <stdio.h>
#include <stdlib.h>

int buscaMenorElemento(int array[], int tamanho) {
    int menorElemento = array[0];
    for (int i = 0; i < tamanho; i++) {
        if (array[i] < menorElemento) {
            menorElemento = array[i];
        }
    }
    return menorElemento;
}

int main() {
    int meuArray[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &meuArray[i]);
    }

    int menorNumero = buscaMenorElemento(meuArray, 10);

    printf("O menor numero inserido foi %d\n", menorNumero);

    return 0;
}
