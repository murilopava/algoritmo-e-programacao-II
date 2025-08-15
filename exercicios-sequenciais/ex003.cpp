/*
João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$
200,00 e C2=R$120,00) que estão atrasadas. Como as contas estão atrasadas,
João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule
e mostre quanto restará do salário do João
*/

#include <iostream>
using namespace std;

int main(){

    float joaoSalario = 1200.00;
    float conta1 = 200.00;
    float conta2 = 120.00;
    float multa = 0.02;

    conta1 = (conta1 * multa) + conta1;

    conta2 = (conta2 * multa) + conta2;

    joaoSalario = joaoSalario - (conta1 + conta2);

    cout << "Restara R$" << joaoSalario << " do salario de Joao";

    return 0;
}