#include <stdio.h>
#include <stdlib.h>
#include <iostream>


typedef struct Aluno{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main(){
    Aluno alunos[5];
    float media, soma;
    for(int i=0;i<sizeof(alunos);i++){
        std::cout << "Digite o nome do aluno: \n";
        std::cin >> alunos[i].nome;
        std::cout << "Digite a matrícula do aluno: \n";
        std::cin >> alunos[i].matricula;
        std::cout << "Digite a nota do aluno: \n";
        std::cin >> alunos[i].nota;
        soma+=alunos[i].nota;
    }
    media = soma/(sizeof(alunos)/sizeof(alunos[0]));
    std::cout << "A média dos alunos é: " << media; 
}