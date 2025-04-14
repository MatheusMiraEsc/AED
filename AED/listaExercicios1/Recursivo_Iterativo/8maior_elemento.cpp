#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int maior_elemento(int n[], int tamanho){
    if(tamanho<=1){
        return n[0];
    }
    int maior=n[0];
    for(int i=1;i<tamanho;i++){
        if(maior<n[i]){
            maior=n[i];
        }
    }
    return maior;
}

int main(){
    int n[] = {7, 9, 6, 20, 8, 37};
    int num, tamanho=sizeof(n)/sizeof(n[0]);
    num=maior_elemento(n, tamanho);
    cout << "Maior numero: " << num << "\n";
}