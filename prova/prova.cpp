#include <iostream>
using namespace std;

struct Item {
    int valor;
    Item *proximo; 

    void Append(int newValor){
        if(proximo == nullptr){
            proximo = new Item;
            proximo->valor = newValor;
        }else{
            proximo->Append(newValor);
        }
    }
};

struct ListaInteiro {

    Item *primeiroItem;
    int qt = 0;

    int addFinalDaLista(int valor) {
        if(primeiroItem == nullptr){
            primeiroItem = new Item;
            primeiroItem->valor = valor;
        }else{
            primeiroItem->Append(valor);
        }
    }

    int addPosicao(int posicao, int valor) {
        if(qt == posicao) {
            primeiroItem = new Item;
            primeiroItem->valor = valor;
        } else{
            qt += 1;
        }
    }

    int removerItem(int posicao, int item) {

    }

    int exibirItem(int posicao) {

    }

    void exibirLista() {

    }

    void exibirListaInversa() {

    }
};


int main(){
    ListaInteiro lista;

    lista.addFinalDaLista(4);
}