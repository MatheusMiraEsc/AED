#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef struct Produto{
    char nomeProduto[30];
    int codigo;
    float preco;
}Produto;

void exibirProduto(Produto p){
    std::cout << "Nome: " << p.nomeProduto;
    std::cout << "Código: " << p.codigo;
    std::cout << "Preço: " << p.preco;

}

int main(){
    Produto p1;
    std::cout << "Digite o nome do produto: \n";
    std::cin >> p1.nomeProduto;
    std::cout << "Digite o código do produto: \n";
    std::cin >> p1.codigo;
    std::cout << "Digite o preço do produto: \n";
    std::cin >> p1.preco;
    exibirProduto(p1);
}