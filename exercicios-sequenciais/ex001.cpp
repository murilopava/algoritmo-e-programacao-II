/*
Faça um programa que solicita que o usuário digite o seu nome e exiba a
mensagem “Olá” seguido do nome digitado pelo usuário. 
*/

#include <iostream>
using namespace std;

int main(){

    string nome;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Ola, " << nome;

    return 0;
}