#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
typedef struct ContaBancaria{
char nome[50];
int numConta;
float saldo;
}Conta;

int depositar(Conta c, int valor){
    return c.saldo+valor;
}

int sacarValor(Conta c, int valor){
    return c.saldo-valor;
}

void exibirSaldo(Conta c){
    cout << "SALDO: " << c.saldo;
}

int main(){
    Conta c;
    int decisao=1, choice, valor;
    while(decisao){
        cout << "Qual operação deseja fazer? \n";
        cout << "1 - Depositar valor \n";
        cout << "2 - Sacar valor da conta \n";
        cout << "3 - Ver saldo da conta \n";
        cout << "0 - finalizar sessão \n";
        cin >> choice;
        if (choice==1){
            cout << "Digite o valor a ser depositado: \n";
            cin >> valor;
            depositar(c, valor);
            cout << "Valor depositado";
        }else if(choice==2){
            cout << "Digite o valor a ser sacado: \n";
            cin >> valor;
            sacarValor(c, valor);
            cout << "Valor sacado";
        }else if(choice==3){
            exibirSaldo(c);
        }else if(choice==0){
            decisao=0;
        }else{
            cout << "Opção inválida, digite novamente: \n";
            cin>> choice;
        }
    }
}