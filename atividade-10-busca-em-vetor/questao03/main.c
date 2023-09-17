#include <stdio.h>
#include <stdlib.h>

int encontraPosicao(int array[], int tamanho) {
    int maiorElemento = array[0];
    int posicao = 0;
    for (int i = 0; i < tamanho; i++) {
        if (array[i] > maiorElemento) {
            maiorElemento = array[i];
            posicao = i;
        }
    }
    return posicao;
}

int main() {
    int meuArray[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &meuArray[i]);
    }

    int posicaoMaiorNumero = encontraPosicao(meuArray, 10);

    printf("O maior elemento desse vetor encontra-se na posicao %d", posicaoMaiorNumero);

    return 0;
}
