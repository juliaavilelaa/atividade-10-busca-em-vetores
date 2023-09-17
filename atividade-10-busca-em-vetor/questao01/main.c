#include <stdio.h>
#include <stdlib.h>

int buscaMaiorElemento(int array[], int tamanho) {
    int maiorElemento = array[0];
    for (int i = 0; i < tamanho; i++) {
        if (array[i] > maiorElemento) {
            maiorElemento = array[i];
        }
    }
    return maiorElemento;
}

int main() {
    int meuArray[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &meuArray[i]);
    }

    int maiorNumero = buscaMaiorElemento(meuArray, 10);

    printf("O maior numero inserido foi %d\n", maiorNumero);

    return 0;
}
