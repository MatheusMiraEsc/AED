#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
int palindromo(string *palavra){
    int tamanho = strlen(palavra->c_str());
    if(*palavra == string(palavra->rbegin(), palavra->rend())) {
        return 1;
    } else {
        return 0;
    }
}

int ehPalindromo(string s) {
    if (s.length() <= 1)
        return 1;
    if (s[0] != s[s.length() - 1])
        return 0;
    return ehPalindromo(s.substr(1, s.length() - 2));
}