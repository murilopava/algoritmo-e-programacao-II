/*
A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um
algoritmo que leia o percentual de alunos reprovados na turma C, o percentual
de aprovados na turma D, calcule e escreva:

a) O número de alunos reprovados na turma C.
b) O número de alunos reprovados na turma D.
c) A percentagem de alunos reprovados em relação ao total de alunos das duas
turmas.
*/

#include <iostream>
using namespace std;

int main(){

    int turmaC = 60; 
    int turmaD = 20; 

    float porcentagem;

    int reprovadosC;
    int reprovadosD;
    float reprovados;

    cout << "Digite a porcentagem de reprovados na turma C: ";
    cin >> porcentagem;

    reprovadosC = turmaC * (porcentagem / 100);

    cout << "Digite a porcentagem de reprovados na turma D: ";
    cin >> porcentagem;

    reprovadosD = turmaD * (porcentagem / 100);

    reprovados = 100 - ((turmaC + turmaD) - (reprovadosC + reprovadosD));

    cout << "Numero de alunos reprovados na turma C: " << reprovadosC << endl;
    cout << "Numero de alunos reprovados na turma D: " << reprovadosD << endl;
    cout << "Percentagem de reprovados em relacao ao total de alunos: " << reprovados;

    return 0;
}