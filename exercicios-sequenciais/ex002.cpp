/*
Faça um algoritmo para calcular quantas ferraduras são necessárias para
equipar todos os cavalos comprados para um haras. 
*/

#include <iostream>
using namespace std;

int main(){

    int cavalos;
    int ferraduras = 0;

    cout << "Quantidade de cavalos: ";
    cin >> cavalos;

    ferraduras = cavalos * 4;

    cout << "A quantidade de ferraduras sera: " << ferraduras;

    return 0;
}