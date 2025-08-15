/*
A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio
inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer.
Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela
de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a
quantidade de sanduíches a fazer, e a máquina informe as quantidades (em
quilos) de queijo, presunto e carne necessários para compra.
*/

#include <iostream>
using namespace std;

int main(){

    float queijo = 0.100;
    float presunto = 0.050;
    float hamburguer = 0.100;

    int quantHamburguer;

    cout << "Digite a quantidade de hamburgueres: ";
    cin >> quantHamburguer;

    queijo *= quantHamburguer;
    presunto *= quantHamburguer;
    hamburguer *= quantHamburguer;

    cout << "A quantidade de cada ingrediente:" << endl;

    cout << queijo << " Kg de QUEIJO" << endl;
    cout << presunto << " Kg de PRESUNTO" << endl;
    cout << hamburguer << " Kg de HAMBURGUER";


    return 0;
}