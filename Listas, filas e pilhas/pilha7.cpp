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

void inverter(const char* str) {
    Node* pilha = NULL;

    for (int i = 0; str[i] != '\0'; i++) {
        pilha = push(pilha, str[i]);
    }

    cout << "String invertida: ";
    char caractere;
    while (pilha != NULL) {
        pilha = pop(pilha, &caractere);  // <- agora sim!
        cout << caractere;
    }
    cout << "\n";
}

int main(){
    inverter("string");
}

