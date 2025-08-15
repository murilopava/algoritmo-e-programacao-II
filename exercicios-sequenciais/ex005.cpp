/*
Faça um programa que calcula os gastos com combustível em uma viagem.
O programa deve solicitar ao usuário a distância a ser percorrida em Km, o
consumo do carro em Km/litro e o preço do litro do combustível. Como resposta
o programa deverá informar qual o valor em R$ a ser gasto com combustível na
viagem.
*/

#include <iostream>
using namespace std;

int main(){

    float kilometros;
    float litros;
    float precoCombustivel;

    cout << "Quantidade de kilometros rodados: ";
    cin >> kilometros;

    cout << "Consumo de Km/litro: ";
    cin >> litros;

    cout << "Preco do litro do combustivel: R$";
    cin >> precoCombustivel;

    float kmLitros;

    kmLitros = kilometros / litros;

    precoCombustivel = kmLitros * precoCombustivel;

    cout << "O valor a ser gasto com o combustivel sera de R$" << precoCombustivel;

    return 0;
}