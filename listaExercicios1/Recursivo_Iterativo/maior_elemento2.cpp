#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int maiorElemento(int vet[], int n){
    int num;
    if(n==1){
        num=vet[0];
        return num;
    }
    num = maiorElemento(vet+1, n-1);
    if (vet[0]> num){
        return vet[0];
    }else{
        return num;
    }
}

int main(){
    int vet[]={100,2,7,51,20};
    int maiorNum, n=sizeof(vet) / sizeof(vet[0]);
    maiorNum=maiorElemento(vet, n);
    cout <<"Maior numero: "<<maiorNum;
}