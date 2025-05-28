#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int buscaSequencial(int arr[], int tam, int busca){
    for(int i=0; i<tam;i++){
        if(arr[i]==busca){
            return i;
        }
    }
    return -1;
}

int contadorSequencial(int arr[], int tam, int n){
    int cont=0;
    for (int i =0; i<tam; i++){
        if (arr[i]==n){
            cont++;
        }
    }
    return cont;
}

int main(){
    int arr[] = {15, 8, 25, 7, 12, 18, 5, 9, 30, 3};
    int busca = 25, tam = 10;
    int pos;
//Questão 1 busca sequencial
    pos = buscaSequencial(arr, tam, busca);
    if(pos != -1){
        cout << "\nValor " << busca << " encontrado na posição " << pos;
    }else{
        cout << "\nValor não encontrado.";
    }
//Questão 2 busca sequencial
    int arr2[] = {7, 3, 5, 7, 9, 2, 7, 1, 4, 6};
    int cont, num = 7, tam2 = 10;
    cont = contadorSequencial(arr2, tam2, num);
    if (cont<=0){
        cout << "\nValor não existe no array";
    }else{
        cout << "\nValor encontrado " << cont << " vez(es) no array";
    }
//Questão 3 busca sequencial
    int arr3[]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int tam3 = 10, n = 55, pos2;
    pos2 = buscaSequencial(arr3, tam3, n);
        if(pos2 == -1){
        cout << "\nValor não encontrado.(-1)";
    }else{
        cout << "\nValor " << n << " encontrado na posição " << pos2;
    }


}
