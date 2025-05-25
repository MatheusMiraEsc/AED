#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void contagem_regressiva(int n){
    while(n!=0){
        cout << n << ", ";
        n-=1;
    }
    cout << "0.";
}

int main(){
    int n=9;
        contagem_regressiva(n);
    }