#include <iostream>
using namespace std;

int main(){
    
    int matriz[5][5];
    int valor = 0;
    /*for(int i = 0; i < 5; i++){
        for(int n = 0; n < 5; n++){
            cout << "Insira o numera na posicao " << matriz[i] << " " << matriz[n];
            cin >> matriz[i][n];
        }
    }*/
    for(int i = 0; i < 5; i++){
        for(int n = 0; n < 5; n++){
            valor += 1;
            matriz[i][n] = valor;
        }
    }

    for(int i = 0; i < 5; i++){
        cout << endl;
        for(int n = 0; n < 5; n++){
            cout << matriz[i][n] << "\t";
        }
    }

    return 0;
}