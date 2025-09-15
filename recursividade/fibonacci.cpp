#include <iostream>
using namespace std;

void fibonacciNormal(int num){
    int antecessor = 0, sucessor = 1, soma = 0;

    for(int i = 0; i < num; i++){
        if(i == 1){
            cout << 1 << '\t';
        }
        cout << soma << '\t';

        soma = antecessor + sucessor;
        antecessor = sucessor;
        sucessor = soma;
    }
}

int fibonacciRecursivo(int num){
    if (num == 0) return 0;
    if (num == 1) return 1;

    return fibonacciRecursivo(num - 1) + fibonacciRecursivo(num - 2);
}

int main(){
    cout << fibonacciRecursivo(5);
}