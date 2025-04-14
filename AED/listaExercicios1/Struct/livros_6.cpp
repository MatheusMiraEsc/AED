#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
typedef struct Livro{
    char titulo[50];
    char autor[50];
    int ano;
}Livro;

void exibirLivros(Livro l[]){
    int year;
    cout << "Digite o ano mínimo de publicação: ";
    cin >> year;
    for(int i=0; i<sizeof(l);i++){
        if(year>l[i].ano){
        cout << "Título: " << l[i].titulo << "\n";
        cout << "Autor: " << l[i].autor << "\n";
        cout << "Ano: " << l[i].ano << "\n";
        }
    }
}

int main(){
    Livro livros[5];
    for(int i = 0; i < (sizeof(livros) / sizeof(livros[0])); i++){
    cout << "Digite o nome do livro: \n";
    cin >> livros[i].titulo;
    cout << "Digite o autor do livro: \n";
    cin >> livros[i].autor;
    cout << "Digite o ano de publicaçao do livro: \n";
    cin >> livros[i].ano;
    }
    exibirLivros(livros);
}