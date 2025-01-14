#include <stdio.h>
#define MAX 5  // Definimos o tamanho máximo da pilha como 5

int pilha[MAX];  // Criamos a pilha com capacidade para 5 elementos
int topo = -1;  // 'topo' indica o índice do topo da pilha

// Função para empilhar um valor (push)
void push(int valor) {
    if (topo == MAX - 1) {  // Verifica se a pilha está cheia
        printf("Pilha cheia!\n");
    } else {
        topo++;  // Move o topo para a próxima posição
        pilha[topo] = valor;  // Coloca o valor no topo
        printf("Inserido: %d\n", valor);
    }
}

// Função para desempilhar o valor do topo (pop)
void pop() {
    if (topo == -1) {  // Verifica se a pilha está vazia
        printf("Pilha vazia!\n");
    } else {
        printf("Removido: %d\n", pilha[topo]);  // Remove o valor do topo
        topo--;  // Move o topo para o anterior
    }
}

int main() {
    push(10);  // Inserimos 10 na pilha
    push(20);  // Inserimos 20 na pilha
    pop();     // Removemos o último elemento (20)
    push(30);  // Inserimos 30 na pilha
    pop();     // Removemos o último elemento (30)
    return 0;
}
