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

//Implementado fila circular
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

//Implementado fila circular
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

int main(){
    Fila* fila=criar();
    enqueue(fila, (char*)"Joao");
    enqueue(fila, (char*)"Maria");
    enqueue(fila, (char*)"Lucas");
    isEmpty(fila);
    front(fila);
    dequeue(fila);
    front(fila);
    dequeue(fila);
    dequeue(fila);
    isEmpty(fila);
}