#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;







// 16. Mostre após cada troca: {29, 10, 14, 37, 13, 40, 2, 7, 5, 18}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
            min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    
        cout << "\n" << i+1 << "a" << " Troca: ";
        for(int k=0; k<n; k++) cout << arr[k] << " ";
    }
    cout << "\n";
}

// 17. Conte trocas: {5, 4, 3, 2, 1, 6, 7, 8, 9, 10}
int selectionCount(int arr[], int n) {
    int cont = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
            min_idx = j;
        }
        if(min_idx!= i){
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            cont++;
        }
    }
    cout << "\nArray ordenado: " ;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return cont;
}

// 18. Ordem decrescente: {42, 33, 60, 15, 75, 12, 25, 90, 1, 6}
void selectionSortDec(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[min_idx])
            min_idx = j;
        }
        if(min_idx!=i){
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    //Questão 16
    int arr[] = {29, 10, 14, 37, 13, 40, 2, 7, 5, 18}; 
    int n = 10;
    cout << "--------------------------------------\n";
    selectionSort(arr, n);
    cout << "\nArray ordenado: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    //Questão 17
    int arr2[] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10}; 
    int n2 = 10, count=0;
    cout << "\n--------------------------------------\n";
    count=selectionCount(arr2, n);
    cout << "\nTrocas: " << count << "\n";
    //Questão 18
    int arr3[] = {42, 33, 60, 15, 75, 12, 25, 90, 1, 6}; 
    int n3 = 10;
    selectionSortDec(arr3, n3);
    cout << "\n--------------------------------------\n";
    cout << "\nArray ordenado: ";
    for(int i = 0; i < n3; i++){
        cout << arr3[i] << " ";
    }
    return 0;
}