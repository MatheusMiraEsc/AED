#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;




// 13. Ordene: {22, 11, 99, 88, 9, 7, 42, 65, 33, 10}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

// 14. Ordene apenas pares: {9, 8, 3, 4, 7, 6, 1, 2, 5, 0}
void insertionSortPar(int arr[], int n) {
    int pares[n];
    int pos[n];
    int cont = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            pos[cont]=i;
            pares[cont]=arr[i];
            cont++;
        }
    }

    for (int i = 1; i < cont; i++) {
        int chave = pares[i]; 
        int j = i - 1;
        while (j >= 0  && pares[j] > chave) {
            pares[j + 1] = pares[j];
            j--;
        }
    pares[j + 1] = chave;
    }
    int cont2=0;
    for(int i = 0; i<n; i++){
        if(arr[i]%2==0){
            arr[i] = pares[cont2];
            cont2++;
        }
    }
}

// 15. Ordem decrescente: {30, 20, 10, 40, 50, 70, 60, 90, 80, 100}
void insertionSortDec(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

int main() {
    //Questão 13
    int arr[] = {22, 11, 99, 88, 9, 7, 42, 65, 33, 10}; 
    int n = 10;
    cout << "--------------------------------------\n";
    insertionSort(arr, n);
    cout << "Array ordenado: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    //Questão 14
    int arr2[] = {9, 8, 3, 4, 7, 6, 1, 2, 5, 0}; 
    int n2 = 10;
    insertionSortPar(arr2, n);
    cout << "\n--------------------------------------\n";
    cout << "Array ordenado: ";
    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    //Questão 15
    int arr3[] = {30, 20, 10, 40, 50, 70, 60, 90, 80, 100}; 
    int n3 = 10;
    insertionSortDec(arr3, n3);
    cout << "\n--------------------------------------\n";
    cout << "Array ordenado: ";
    for(int i = 0; i < n3; i++){
        cout << arr3[i] << " ";
    }
    return 0;
}