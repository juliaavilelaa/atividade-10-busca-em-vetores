#include <stdio.h>
#include <stdlib.h>

int encontraPosicaoMaior(int array[], int tamanho) {
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

int encontraPosicaoMenor(int array[], int tamanho) {
    int menorElemento = array[0];
    int posicao = 0;
    for (int i = 0; i < tamanho; i++) {
        if (array[i] < menorElemento) {
            menorElemento = array[i];
            posicao = i;
        }
    }
    return posicao;
}

int main() {
    int meuArray[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &meuArray[i]);
    }

    int posicaoMaiorNumero = encontraPosicaoMaior(meuArray, 5);
    int posicaoMenorNumero = encontraPosicaoMenor(meuArray, 5);

    printf("O maior valor desse vetor encontra-se na posicao %d, e o menor, na posicao %d.", posicaoMaiorNumero, posicaoMenorNumero);

    return 0;
}
