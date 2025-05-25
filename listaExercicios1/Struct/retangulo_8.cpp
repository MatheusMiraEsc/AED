#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct Retangulo{
    float base;
    float altura;
}Retangulo;

int calcArea(Retangulo r){
    return r.base * r.altura;
}

int calcPerimetro(Retangulo r){
    return (r.base*2)+(r.altura*2);
}

int main(){
    Retangulo ret;
    cout << "Digite a base do retângulo: \n";
    cin >> ret.base;
    cout << "Digite a altura do retângulo: \n";
    cin >> ret.altura;
    cout << "Área do retângulo: \n";
    int a =calcArea(ret);
    cin >> a;
    cout << "Perímetro do retângulo: \n";
    int b =calcPerimetro(ret);
    cin >> b;

}