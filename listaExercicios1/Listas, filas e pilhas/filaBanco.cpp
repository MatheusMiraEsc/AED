#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
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
    cout << "Final";
}

void filaBanco(Fila* fila) {
    cout << "Clientes: \n";
    enqueue(fila, (char*)"Ana");
    enqueue(fila, (char*)"Bruno");
    enqueue(fila, (char*)"Carlos");
    enqueue(fila, (char*)"Diana");
    imprimir(fila);
    cout << "\nIniciando atendimento:\n";

    while (fila->frente != NULL) {
        cout << "Atendendo: " << fila->frente->nome << "\n";
        dequeue(fila);
    }
    cout << "Todos os clientes foram atendidos.\n";
}

int main(){
    Fila* fila=criar();
    filaBanco(fila);
    
}