#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int soma_digitos(int n){
    int soma = 0;
    if(n<10){
        return n;
    }
    while(n!=0){
        soma+= n%10;
        n/=10;
    }
    return soma;
}

int main(){
    int n=58;
    int soma;
    soma=soma_digitos(n);
    cout << "A soma dos digitos eh: " << soma;
}