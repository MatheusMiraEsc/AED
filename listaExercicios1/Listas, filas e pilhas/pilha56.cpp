#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
typedef struct Node {
    char dado;
    struct Node* prox;
} Node;
//Exercicio 5
Node* push(Node* topo, char valor) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->dado = valor;
    novo->prox = topo;
    return novo;
}

Node* pop(Node* topo) {
    if (topo==NULL) {
        return NULL;
    }
    Node* temp = topo;
    char valor = topo->dado;
    topo = topo->prox;
    free(temp);
    return topo;
}
void top(Node* pilha) {
    if (pilha==NULL) {
        cout << "Pilha vazia!\n";
    } else {
        cout << "Topo da pilha: " << pilha->dado <<"\n";
    }
}

void isEmpty(Node* pilha){
    if (pilha==NULL) {
        cout << "Pilha vazia! \n";
    } else {
        cout << "Pilha nao esta vazia \n";
    }
}
//Exercicio 6
void checkIt(char expressao[]) {
    Node* pilha = NULL;
    for (int i = 0; expressao[i] != '\0'; i++) {
        char c = expressao[i];
        if (c == '(') {
            pilha = push(pilha, c);
        } else if (c == ')') {
            if (pilha==NULL) {
                cout << "Invalido \n";
                return;
            }
            pilha = pop(pilha);
        }
    }
    cout << "Valido \n";
}

int main(){
    Node* pilha=NULL;
    pilha=push(pilha, 'A');
    pilha=push(pilha,'B');
    pilha=push(pilha,'C');
    pilha=push(pilha,'D');
    isEmpty(pilha);
    top(pilha);
    pilha=pop(pilha);
    top(pilha);
    while (pilha!=NULL) {
        pilha = pop(pilha);
    }
    checkIt("(())()");
}

