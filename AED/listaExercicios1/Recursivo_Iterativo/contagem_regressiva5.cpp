#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int contagem_regressiva(int n){
    if(n==0){
        cout << "0.";
        return 1;
    }else{
        cout << n << ", ";
        return contagem_regressiva(n-1);
    }
}

int main(){
    int n= 10;
    contagem_regressiva(n);
}