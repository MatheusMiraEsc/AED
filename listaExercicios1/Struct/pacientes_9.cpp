#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct Paciente{
    char nome[50];
    int idade;
    char diagnostico[100];
}Paciente;

void exibirPacientes(Paciente p[]){
    for(int i=0; i<sizeof(p)/sizeof(p[0]);i++){
        if(p[i].idade>60){
            cout << "Nome paciente: " << p[i].nome;
            cout << "Idade do paciente: " << p[i].idade;
            cout << "Diagnóstico do paciente: " << p[i].diagnostico;
        }
    }
}


int main(){
    Paciente p[5];
    for(int i = 0; i < (sizeof(p) / sizeof(p[0])); i++){
        cout << "Digite o nome do paciente: \n";
        cin >> p[i].nome;
        cout << "Digite a idade do paciente: \n";
        cin >> p[i].idade;
        cout << "Digite o diagnostico do paciente: \n";
        cin >> p[i].diagnostico;
        }
    exibirPacientes(p);
}