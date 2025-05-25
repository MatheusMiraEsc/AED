#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef struct Funcionario{
    char nome[50];
    char cargo[30];
    float salario;
}Funcionario;

int main(){
    int numFuncionarios;
    std::cout << "Digite o número de funcionários: \n";
    std::cin >> numFuncionarios;
    Funcionario funcionarios[numFuncionarios];
    for(int i=0; i<numFuncionarios; i++){
        std::cout << "Digite o nome do funcionário: \n";
        std::cin >> funcionarios[i].nome;
        std::cout << "Digite o cargo do funcionário: \n";
        std::cin >> funcionarios[i].cargo;
        std::cout << "Digite o salário do funcionário: \n";
        std::cin >> funcionarios[i].salario;
    }
    for(int i=0; i<numFuncionarios; i++){
        std::cout << "Nome do funcionário: " << funcionarios[i].nome;
        std::cout << "Cargo do funcionário: " << funcionarios[i].cargo;
        std::cout << "Salário do funcionário: " << funcionarios[i].salario;
    }


}