#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int contarDigitos(int num){
    int digitos=1;
    if(num<10){
        return digitos;
    }
    return digitos + contarDigitos(num/10);

}

int main(){
    int numero=10;
    int digits=contarDigitos(numero);
    cout << digits;

}