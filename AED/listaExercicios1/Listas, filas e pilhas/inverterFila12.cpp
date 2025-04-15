#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef struct NodePilha {
    char nome[50];
    struct NodePilha* prox;
} NodePilha;

NodePilha* push(NodePilha* topo, char nome[]) {
    NodePilha* novo = (NodePilha*)malloc(sizeof(NodePilha));
    strcpy(novo->nome, nome);
    novo->prox = topo;
    return novo;
}

NodePilha* pop(NodePilha* topo, char nome[]) {
    if (topo == NULL) return NULL;
    strcpy(nome, topo->nome);
    NodePilha* temp = topo;
    topo = topo->prox;
    free(temp);
    return topo;
}

typedef struct Node {
    char nome[50];
    struct Node* prox;
} Node;

typedef struct {
    Node* frente;
    Node* tras;
} Fila;

Fila* criar() {
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->frente=NULL;
    f->tras = NULL;
    return f;
}

void enqueue(Fila* f, char nome[]) {
    Node* novo = (Node*)malloc(sizeof(Node));
    strcpy(novo->nome, nome);
    if (f->frente == NULL) {
        f->frente = f->tras = novo;
        novo->prox = novo; 
    } else {
        novo->prox = f->frente;
        f->tras->prox = novo;
        f->tras = novo;
    }
}

void dequeue(Fila* f) {
    if (f->frente == NULL){
        return;
    }
    Node* temp = f->frente;

    if (f->frente == f->tras) {
        f->frente = f->tras = NULL;
    } else {
        f->frente = f->frente->prox;
        f->tras->prox = f->frente;
    }

    free(temp);
}

void isEmpty(Fila* f){
    if (f == NULL || f->frente == NULL) {
        cout << "Fila vazia! \n";
    } else {
        cout << "Fila nao esta vazia \n";
    }
}

void front(Fila* f) {
    if (f==NULL) {
        cout << "Fila vazia!\n";
    } else {
        cout << "Topo da fila: " << f->frente->nome <<"\n";
    }
}
void imprimir(Fila* f) {
    if (f->frente == NULL) {
        cout << "Fila vazia!\n";
        return;
    }

    Node* atual = f->frente;
    do {
        cout << atual->nome << " -> ";
        atual = atual->prox;
    } while (atual != f->frente);
    cout << "Final\n";
}

void inverterFila(Fila* fila) {
    NodePilha* pilha = NULL;
    char tempNome[50];
    while (fila->frente != NULL) {
        strcpy(tempNome, fila->frente->nome);
        pilha = push(pilha, tempNome);
        dequeue(fila);
    }
    while (pilha != NULL) {
        pilha = pop(pilha, tempNome);
        enqueue(fila, tempNome);
    }

    cout << "Fila invertida:\n";
    imprimir(fila);
}

int main(){
    Fila* fila=criar();
    enqueue(fila, (char*)"Joao");
    enqueue(fila, (char*)"Maria");
    enqueue(fila, (char*)"Lucas");
    cout << "Fila original:\n";
    imprimir(fila);

    inverterFila(fila);
}