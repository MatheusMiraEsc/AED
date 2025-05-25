#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef struct Pessoa{
    char nome[50];
    int idade;
    float altura;
}Pessoa;

int main(){
    Pessoa pessoa;
    std::cout << "Digite o seu nome: \n";
    std::cin >> pessoa.nome;
    std::cout << "Digite a sua idade: \n";
    std::cin >> pessoa.idade;
    std::cout << "Digite a sua altura: \n";
    std::cin >> pessoa.altura;
    std::cout << "Nome: " << pessoa.nome << "\n"; 
    std::cout << "Idade: " << pessoa.idade << "\n";
    std::cout << "Altura: " << pessoa.altura << "\n";
}

