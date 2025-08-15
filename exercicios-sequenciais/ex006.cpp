/*
O sistema de avaliação de determinada disciplina, é composto por três provas.
A primeira prova tem peso 2, a segunda tem peso 4 e a terceira prova tem peso
6. Faça um programa que solicita as notas para o aluno, calcula e exibe a média
final deste aluno.
*/

#include <iostream>
using namespace std;

int main(){

    int prova1 = 2;
    int prova2 = 4;
    int prova3 = 6;

    float nota1;
    float nota2;
    float nota3;

    cout << "Nota 1 do aluno: ";
    cin >> nota1;

    cout << "Nota 2 do aluno: ";
    cin >> nota2;

    cout << "nota 3 do aluno ";
    cin >> nota3;

    float media;

    media = ((nota1 * prova1) + (nota2 * prova2) + (nota3 * prova3)) / (prova1 + prova2 + prova3);

    cout << media;

    return 0;
}   