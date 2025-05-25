#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>

using namespace std;

int soma_digitos(int n) {
    if (n < 10) {
        return n; // Base case: single-digit number
    } else {
        int temp = n, cont = 1;
        while (temp >= 10) {
            temp /= 10;
            cont *= 10;
        }
        int num = temp * cont;
        return temp + soma_digitos(n - num);
    }
}

int main(){
    int num =12657;
    int soma = soma_digitos(num);
    cout << "A soma dos digitos eh: " << soma;
}