#include <stdio.h>
#include <stdlib.h>

int buscaValoresIguais(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (array[i] == array[j]) {
                return array[i];
            }
        }
    }
    return -1;
}

int main() {
    int meuArray[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &meuArray[i]);
    }

    int possuiIguais = buscaValoresIguais(meuArray, 10);

    if (possuiIguais == -1) {
        printf("Nao existem valores iguais.");
    } else {
        printf("Existem valores iguais a %d!", possuiIguais);
    }

    return 0;
}
