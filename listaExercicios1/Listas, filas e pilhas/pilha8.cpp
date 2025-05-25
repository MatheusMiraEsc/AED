#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
typedef struct Node {
    char dado;
    struct Node* prox;
} Node;

Node* push(Node* topo, char valor) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->dado = valor;
    novo->prox = topo;
    return novo;
}

Node* pop(Node* topo, char* valor) {
    if (topo == NULL) return NULL;
    Node* temp = topo;
    *valor = topo->dado;
    topo = topo->prox;
    free(temp);
    return topo;
}
void decToBi(int numero) {
    if (numero == 0) {
        cout << "0\n";
        return;
    }

    Node* pilha = NULL;

    while (numero > 0) {
        int resto = numero % 2;
        pilha = push(pilha, resto + '0');
        numero /= 2;
    }

    cout << "Binario: ";
    char bit;
    while (pilha != NULL) {
        pilha = pop(pilha, &bit);
        cout << bit;
    }
    cout << "\n";
}

int main(){
    decToBi(10);
    decToBi(25);
}
