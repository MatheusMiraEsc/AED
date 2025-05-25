#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int produto_soma(int a, int b){
    int soma=0;
    if(a == 0 || b == 0){
        return soma;
    }
    for(int i=0;i<b;i++){
        soma+=a;
    }
    return soma;
}

int main(){
    int a=5,b=5;
    int produto;
    produto=produto_soma(a,b);
    cout << "O produto de " << a << " por " << b << ": " << produto;
}