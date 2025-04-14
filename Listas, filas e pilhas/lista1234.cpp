#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
//Exercicio 1
typedef struct Node {
    int dado;
    struct Node* prox;
} Node;

Node* inserirInicio(Node* lista, int valor) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->dado = valor;
    novo->prox = lista;
    return novo;
}

Node* inserirFim(Node* lista, int valor) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->dado = valor;
    novo->prox = NULL;
    if (!lista) return novo;
    
    Node* temp = lista;
    while (temp->prox) temp = temp->prox;
    temp->prox = novo;
    return lista;
}
void removeAt(Node*& lista, int num){
    if(lista == NULL){
        cout << "Lista esta vazia";
        return;
    }
    Node* remover=lista;
    Node* anterior=NULL;
    while(remover!=NULL && remover->dado!=num){
        anterior=remover;
        remover = remover->prox;
    }
    if(remover==NULL){
        cout << "Elemento nao encontrado \n";
        return;
    }
    if(anterior==NULL){
        lista=remover->prox;
    }else{
        anterior->prox=remover->prox;
    }
    delete remover;
    cout << "Elemento removido \n";
}
void imprimirLista(Node* lista) {
    Node* temp = lista;
    while (temp) {
        cout << temp->dado << " -> ";
        temp = temp->prox;
    }
    cout << "NULL \n";
}

//Exercicio 2
int contagem(Node* lista){
    int cont=0;
    if(lista == NULL){
        cout << "Lista esta vazia";
        return 0;
    }
    Node* posterior=lista;
    while(posterior!=NULL){
        cont++;
        posterior = posterior->prox;
    }
    return cont;
    
}
//Exercicio 3
Node* inserirOrdenado(Node* lista, int valor){
    if(lista == NULL){
        cout << "Lista esta vazia";
        return NULL;
    }
    Node* no1 = new Node;  
    no1->dado = valor;
    no1->prox = nullptr;
    if (lista == nullptr || valor < lista->dado) {
        no1->prox = lista;
        return no1;
    }
    Node* atual = lista;
    while (atual->prox != nullptr && atual->prox->dado < valor) {
        atual = atual->prox;
    }
    no1->prox = atual->prox;
    atual->prox = no1;

    return lista;
    
}
//Exerciico 4
Node* reverter(Node* lista) {
    Node* anterior = nullptr;
    Node* atual = lista;
    Node* proximo = nullptr;
    
    while (atual != nullptr) {
        proximo = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proximo;
    }
    
    return anterior;
}


int main(){
    Node* lista = NULL;
    int contador=0;
    lista = inserirInicio(lista, 12);
    lista = inserirInicio(lista, 11);
    lista = inserirInicio(lista, 10);
    lista =inserirFim(lista, 13);
    contador=contagem(lista);
    cout << "A lista tem: " << contador << " elemento(s). \n";
    imprimirLista(lista);
    removeAt(lista, 11);
    contador=contagem(lista);
    cout << "Agora a lista tem: " << contador << " elemento(s). \n";
    imprimirLista(lista);
    lista=inserirOrdenado(lista,11);
    lista=inserirOrdenado(lista,14);
    lista=inserirOrdenado(lista,15);
    lista=inserirOrdenado(lista,16);
    imprimirLista(lista);
    lista=reverter(lista);
    imprimirLista(lista);
}