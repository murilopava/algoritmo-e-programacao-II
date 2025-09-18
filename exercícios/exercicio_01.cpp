#include <iostream>
using namespace std;

#define TAMANHO 20

int main(){
    
    int vetor[TAMANHO];
    for(int i = 0; i < TAMANHO; i++){
        cout << "Digite um valor: ";
        cin >> vetor[i];
    }

    cout << "Os valores pares desse vetor sao: " << endl;

    for(int i = 0; i < TAMANHO; i++){
        if(vetor[i] % 2 == 0){
            cout << vetor[i] << " na posicao " << i << endl;
        }
    }

    return 0;
}