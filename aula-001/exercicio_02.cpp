#include <iostream>
using namespace std;

#define TAMANHO 15

int main(){
    int vetor[TAMANHO];

    for(int i = 0; i < TAMANHO; i++){
        cout << "Adicione um numero: ";
        cin >> vetor[i];
    }    

    cout << "O seu vetor de tras pra frente: " << endl;

    for(int i = TAMANHO - 1; i >= 0; i--){
        cout << vetor[i] << endl;
    }

    return 0;
}