#include <iostream>
#define TAM 10
int tabelaHash[TAM]; 

using namespace std;
//Questão 7
int Hash(int valor){
    return valor % 10;
}

void inserir(int valor) {
    for (int i = 0; i < TAM; i++) {
        int index = Hash(valor);
        int tentativa = (index + i) % TAM;
        if(tabelaHash[tentativa] == -1){
            tabelaHash[tentativa] = valor;
            break;
        }
    }
}
//Questão 8
typedef struct No {
    int chave;
    struct No *prox;
} No;
No* tabelaHash2[TAM];

void inicializarTabela() {
    for (int i = 0; i < TAM; i++)
    tabelaHash[i] = -1;
}

void inserirEncadeado(int chave) {
    int index = Hash(chave);
    No* novo = (No*)malloc(sizeof(No));
    novo->chave = chave;
    novo->prox = tabelaHash2[index];
    tabelaHash2[index] = novo;
}

No* buscar(int chave) {
    int index = Hash(chave);
    No* atual = tabelaHash2[index];
    while (atual != NULL) {
        if (atual->chave == chave){
            return atual;
        }
        atual = atual->prox;
    }
    return NULL;
}

//Questão 9
int tabelaHash3[TAM];
int inserirSond(int chave) {
    int index = Hash(chave);
    for (int i = 0; i < TAM; i++) {
        int tentativa = (index + i) % TAM;
            if (tabelaHash3[tentativa] == -1 || tabelaHash3[tentativa] == -2) {
            tabelaHash3[tentativa] = chave;
            return tentativa; 
            }
    }
    return -1;
}
int buscarSond(int chave) {
    int index = Hash(chave);
        for (int i = 0; i < TAM; i++) {
        int tentativa = (index + i) % TAM;
            if (tabelaHash3[tentativa] == -1){
                return -1;
            }else if (tabelaHash3[tentativa] == chave){
                return tentativa;
            }
        }
    return -1; 
}



int main() {
    //Questão 7
    int valores[] = {15, 25, 35, 45, 55};

    for(int i = 0; i < TAM; i++){
        tabelaHash[i] = -1;
    }

    for(int i=0; i<5; i++){
        inserir(valores[i]);
    }

    cout << "\n--------------------------------------\n";
    cout << "\nTabela Hash:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Indice: "<< i << " - " << " Valor: " << tabelaHash[i]<<"\n";
    }
    //Questão 8
    cout << "\n--------------------------------------\n";
    int valores2[] = {12, 22, 32, 42};
    for(int i=0; i<4; i++){
        inserirEncadeado(valores2[i]);
    }
    No* procurar = buscar(22);
    if(procurar!=NULL){
        cout << "\nValor "<< procurar->chave << " encontrado\n";
    }else{
        cout << "\nValor não encontrado";
    }

    //Questão 9
    cout << "\n--------------------------------------\n";
    int valores3[] = {17, 27, 37, 47, 57};
    int chave = 37;
    for(int i = 0; i < TAM; i++){
        tabelaHash3[i] = -1;
    }
    for(int i = 0; i < 5; i++){
        inserirSond(valores3[i]);
    }

    cout << "\nTabela Hash:";
    for (int i = 0; i < TAM; i++) {
        cout << "\nIndice: "<< i;
        if (tabelaHash3[i] == -1){
            cout << " - Espaço vazio";
        }else if (tabelaHash3[i] == -2){
            cout << " - Valor removido";
        }else{
            cout << " - Valor: "<< tabelaHash3[i] ;
        }
    }
    cout << "\n";
    cout << "\n--------------------------------------\n";
    return 0;
}

