#include <stdio.h>
#include <stdlib.h>
#include <iostream>


typedef struct Carro{
    char modelo[30];
    int ano;
    float preco;
}Carro;

int main(){
    Carro car;
    Carro *car_p = (Carro*) malloc(sizeof(Carro));
    car_p = &car;

    std::cout << "Digite o modelo do carro: \n";
    std::cin >> car.modelo;
    std::cout << "Digite o ano do carro: \n";
    std::cin >> car.ano;
    std::cout << "Digite o preço do carro: \n";
    std::cin >> car.preco;
    std::cout << "Modelo: " << car.modelo << "\n";
    std::cout << "Ano: " << car.ano << "\n";
    std::cout << "Preço: " << car.preco << "\n";
    free(car_p);
}