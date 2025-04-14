#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>

using namespace std;
typedef struct Agenda{
char nome[50];
char telefone[15];
}Agenda;

void criarAgenda(Agenda a[], int numContatos){
    for(int i=0; i<numContatos; i++){
        cout << "Digite o nome do contato: \n";
        cin >> a[i].nome;
        cout << "Digite o telefone do contato: \n";
        cin >> a[i].telefone;
    }
}

Agenda* procurarContato(Agenda a[], int numContatos){
    char name[50];
    cout << "Digite o nome do contato: \n";
    cin >> name;
    for (int i=0; i<numContatos;i++){
        if(strcmp(name, a[i].nome)== 0){
            return &a[i];
        }
    }
    return nullptr;
}

int main(){
    int numContatos;
    cout << "Digite o número de contatos na agenda: \n";
    cin >> numContatos;

    Agenda* agenda = new Agenda[numContatos];
    criarAgenda(agenda, numContatos);
    Agenda* encontrado = procurarContato(agenda, numContatos);
    if(encontrado!=nullptr){
        cout << "Contato: " << encontrado->nome << " - " << encontrado->telefone;
    } else{
        cout << "Contato não encontrado";
    }
    delete[] agenda;
}