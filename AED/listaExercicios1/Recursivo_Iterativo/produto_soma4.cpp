#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int mult_soma(int a, int b){
    if(a==0 || b==0){
        return 0;
    }else{
        return a + mult_soma(a, b-1);
    }
}

int main(){
    int a=7,b=2;
    int result;
    result = mult_soma(a, b);
    cout << "Multiplicacao: " << result;
}