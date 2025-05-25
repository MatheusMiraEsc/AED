#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

// 10. Ordene o vetor: {9, 7, 5, 3, 1, 2, 4, 6, 8, 0}
// 11. Pare se já estiver ordenado: {1, 2, ..., 10}
// 12. Ordem decrescente: {12, 3, 45, 7, 18, 9, 25, 31, 6, 11}

void bubbleSort(int arr[], int tam){
    int temp = 0;
    for(int i = 0; i<tam-1;i++){
        for(int j=0; j< tam - i - 1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= temp;
            }
        }
    }
}

void bubbleSortAoContrario(int arr[], int tam){
    int temp = 0;
    for(int i = 0; i<tam-1;i++){
        for(int j=0; j< tam - i - 1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= temp;
            }
        }
    }
}

int pareOrdenado(int arr[], int tam){
    int temp = 0;
    for(int i = 0; i<tam-1;i++){
        for(int j=0; j< tam - i - 1;j++){
            if(arr[j]>arr[j+1]){
                return -1;
            }
        }
    }
    return 1;
}

int main(){
    // Questão 10
    int arr[] = {9, 7, 5, 3, 1, 2, 4, 6, 8, 0};
    int tam = 10;
    bubbleSort(arr, tam);
    cout << "Array ordenado: ";
    for (int i=0; i<tam;i++){
        cout << arr[i] << " ";
    }
    // Questão 11
    int arr2[] = {1, 2, 3, 4, 5, 7, 6, 8, 9, 10};
    int ordenado;
    ordenado = pareOrdenado(arr, tam);
    if(ordenado == -1){
        cout << "\nArray não foi ordenado. ";
        bubbleSort(arr, tam);
        cout << "\nAqui está o array ordenado: ";
        for (int i=0; i<tam;i++){
            cout << arr2[i] << " ";
        }
    }else{
        cout << "\nArray já foi ordenado.";
    }
    
    // Questão 12
    int arr3[] = {12, 3, 45, 7, 18, 9, 25, 31, 6, 11};
    bubbleSortAoContrario(arr, tam);
    cout << "\nArray ordenado decrescente: ";
    for (int i=0; i<tam;i++){
        cout << arr[i] << " ";
    }
}