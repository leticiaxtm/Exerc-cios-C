#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node* createList() {
    return NULL;
}

Node* insert(Node* lista, int data) {
    Node* novo = malloc(sizeof(Node));
    novo->data = data;
    novo->next = NULL;
    if(!lista) {
        return novo;
    }
    Node* aux = lista;
    while (aux->next) aux = aux->next;
    aux->next = novo;
    return lista;

}

void imprimir(Node* lista) {
    while (lista)
    {
        printf("%d -> ", lista->data);
        lista = lista->next;
    }
    printf("NULL\n");
}

//EXERCICIO 01
int checkData(Node* lista, int data) {
    int encontrou = 0;
    while (lista)
    {
        if (lista->data == data)  {
            encontrou = 1;
            break;
        }
        lista = lista->next;
    }
    if (encontrou) printf("O item %d existe na lista.\n", data);
    else printf("O item nao %d existe na lista.\n", data);

    return encontrou;
}

Node* deleteList(Node* lista) {
    Node* aux;
    while (lista != NULL) {
        aux = lista; 
        lista = lista->next; 
        free(aux);
    }
    return NULL;
}

//EXERCICIO 02
Node* concatList(Node* list1, Node* list2) {
    if (!list1) return list2;

    Node* aux = list1;
    while (aux->next) aux = aux->next;
    aux->next = list2;
    return list1;
}

int main(int argc, char const *argv[])
{
    Node* lista01 = createList();
    Node* lista02 = createList();
    lista01 = insert(lista01, 1);
    lista01 = insert(lista01, 2);
    lista01 = insert(lista01, 3);

    lista02 = insert(lista02, 4);
    lista02 = insert(lista02, 5);
    lista02 = insert(lista02, 6);
    imprimir(lista01);
    checkData(lista01, 4);
    checkData(lista01, 3);
    imprimir(lista02);
    Node* newLista = concatList(lista01, lista02);
    imprimir(newLista);

    printf("Deseja destruir as listas? (s/n): ");
    char input;
    fflush(stdin);
    scanf("%c", &input);
    if (input == 's') {
        newLista = deleteList(newLista);
        printf("Listas deletadas com sucesso.\n");
    }
    return 0;
}
