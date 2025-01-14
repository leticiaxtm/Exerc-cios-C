#include <stdio.h>
#include <stdlib.h>
#define TAM 5

// Função de Busca Linear
int buscaL(int num[TAM], int b, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (num[i] == b) {
            return i;  // Retorna a posição do elemento encontrado
        }
    }
    return -1;  // Retorna -1 se o elemento não for encontrado
}

// Função de Busca Binária
int buscaB(int num[TAM], int b, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int i = (inicio + fim) / 2;  // Calcula o ponto médio

        if (num[i] == b) {
            return i;  // Elemento encontrado, retorna a posição
        } else if (num[i] > b) {
            fim = i - 1;  // Ajusta para a metade esquerda
        } else {
            inicio = i + 1;  // Ajusta para a metade direita
        }
    }
    return -1;  // Retorna -1 se o elemento não for encontrado
}

int main() {
    int num[TAM] = {2, 3, 10, 12, 20};  // Vetor de exemplo
    int b = num[3];  // Elemento que queremos buscar (no caso, num[3] é 12)

    int c = buscaL(num, b, TAM);  // Resultado da Busca Linear
    int d = buscaB(num, b, TAM);  // Resultado da Busca Binária

    printf("O elemento %d está na posição (Busca Linear): %d\n", b, c);
    printf("O elemento %d está na posição (Busca Binária): %d\n", b, d);

    return 0;
}
