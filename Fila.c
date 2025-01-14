#include <stdio.h>
#define MAX 5  // Definimos o tamanho máximo da fila como 5

int fila[MAX];  // Criamos a fila com capacidade para 5 elementos
int frente = -1, tras = -1;  // 'frente' indica o primeiro elemento da fila e 'tras' o último

// Função para adicionar um valor à fila (enqueue)
void enqueue(int valor) {
    if (tras == MAX - 1) {  // Verifica se a fila está cheia
        printf("Fila cheia!\n");
    } else {
        if (frente == -1) frente = 0;  // Se for o primeiro elemento, ajusta a frente para 0
        tras++;  // Move o final da fila para a próxima posição
        fila[tras] = valor;  // Adiciona o valor no final da fila
        printf("Inserido: %d\n", valor);
    }
}

// Função para remover o primeiro valor da fila (dequeue)
void dequeue() {
    if (frente == -1) {  // Verifica se a fila está vazia
        printf("Fila vazia!\n");
    } else {
        printf("Removido: %d\n", fila[frente]);  // Remove o valor da frente da fila
        frente++;  // Move a frente para o próximo valor
        if (frente > tras) frente = tras = -1;  // Se a fila esvaziar, reseta os indicadores
    }
}

int main() {
    enqueue(10);  // Inserimos 10 na fila
    enqueue(20);  // Inserimos 20 na fila
    dequeue();    // Removemos o primeiro elemento (10)
    enqueue(30);  // Inserimos 30 na fila
    dequeue();    // Removemos o primeiro elemento (20)
    return 0;
}
