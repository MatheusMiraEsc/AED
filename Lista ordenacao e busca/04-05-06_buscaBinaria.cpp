#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

//Questão 4
int buscabinaria(int arr[], int tam, int valor){
    int inicio = 0, meio, fim = tam - 1;
    while(inicio<=fim){
        meio = (inicio + fim)/2;

        if (arr[meio] == valor){
            return meio;
        }else if(arr[meio]< valor){
            inicio = meio +1;
        } else{
            fim = meio-1;
        }
    }
    return -1;

}

//Questão 5
int contagemBinaria(int arr[], int tam, int valor){
    int inicio = 0, meio, fim = tam - 1, cont=0;
    while(inicio<=fim){
        meio = (inicio + fim)/2;

        if (arr[meio] == valor){
            cont++;
            return cont;
        }else if(arr[meio]< valor){
            cont++;
            inicio = meio +1;
        } else{
            cont++;
            fim = meio-1;
        }
    }
    return cont;
}

//Questão 6
int retornaPosicao(int arr[], int tam, int valor){
    int inicio = 0, meio, fim = tam - 1;
    while(inicio<=fim){
        meio = (inicio + fim)/2;

        if (arr[meio+1] >= valor){
            return meio+1;
        }else if(arr[meio]< valor){
            inicio = meio +1;
        } else{//fim=4
            fim = meio-1;
        }
    }
    return -1;
}

int main(){
    //Questão 4
    cout << "Questão 4\n";
    int arr1[] = {2, 4, 6, 8, 10, 12, 13, 14, 16, 18};
    int valor = 13, tam = 10, pos;
    pos = buscabinaria(arr1, tam, valor);
    if (pos != -1){
        cout << "Valor " << valor << " encontrado na posição " << pos;
        cout << "\nOK";
    }else{
        cout << "Valor não encontrado";
    }

    //Questão 5
    cout << "\nQuestão 5";
    int arr2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int valor2 = 100, cont=0;
    cont = contagemBinaria(arr2, tam, valor2);
    if (cont <= 0){
        cout << "\nValor não encontrado";
    }else{
        cout << "\nValor " << valor2 << " encontrado após " << cont << " comparação(ões).";
        cout << "\nOK";
    }

    //Questão 6
    cout << "\nQuestão 6";
    int arr3[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int valor3 = 27, pos2;
    pos2 = retornaPosicao(arr2, tam, valor2);
    if (pos2!=-1){
        cout << "\nValor " << valor3 << " deve ser inserido na posição " << pos2;
    }else{
        cout << "\nValor não encontrado " << pos2;
    }
}
