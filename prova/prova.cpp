#include <iostream>
using namespace std;

struct Item {
    int valor;
    Item *proximo = nullptr;

    void Append(int newValor) {
        if (proximo == nullptr) {
            proximo = new Item;
            proximo->valor = newValor;
        } else {
            proximo->Append(newValor);
        }
    }

    void InsertAt(int pos, int newValor) {
    if (pos == 0) {
        Item* novo = new Item;
        novo->valor = newValor;
        novo->proximo = proximo;
        proximo = novo;
    } else if (proximo != nullptr) {
        proximo->InsertAt(pos - 1, newValor);
    } else {
        cout << "Posicao invalida!\n";
    }
    }

    void RemoveAt(int pos) {
        if (proximo == nullptr) {
            cout << "Posicao invalida!\n";
            return;
        }

        if (pos == 0) {
            Item* temp = proximo;
            proximo = proximo->proximo;
            delete temp;
        } else {
            proximo->RemoveAt(pos - 1);
        }
    }

    void MostrarPosicao(int pos) {
        if (pos == 0) {
            cout << valor << endl;
        } else if (proximo != nullptr) {
            proximo->MostrarPosicao(pos - 1);
        } else {
            cout << "Posicao invalida!\n";
        }
    }

    void MostrarNormal() {
        cout << valor << " ";
        if (proximo != nullptr)
            proximo->MostrarNormal();
    }

    void MostrarInversa() {
        if (proximo != nullptr)
            proximo->MostrarInversa();
        cout << valor << " ";
    }

    void Liberar() {
        if (proximo != nullptr)
            proximo->Liberar();
        delete this;
    }
};

struct ListaInteiro {
    Item *primeiroItem = nullptr;
    int qt = 0;

    void addFinalDaLista(int valor) {
        if (primeiroItem == nullptr) {
            primeiroItem = new Item;
            primeiroItem->valor = valor;
        } else {
            primeiroItem->Append(valor);
        }
        qt++;
    }

    void addPosicao(int pos, int valor) {
        if (pos < 0 || pos > qt) {
            cout << "Posicao invalida!\n";
            return;
        }

        if (pos == 0) {
            Item *novo = new Item;
            novo->valor = valor;
            novo->proximo = primeiroItem;
            primeiroItem = novo;
        } else {
            primeiroItem->InsertAt(pos - 1, valor);
        }
        qt++;
    }

    void removerItem(int pos) {
        if (primeiroItem == nullptr || pos < 0 || pos >= qt) {
            cout << "Posicao invalida!\n";
            return;
        }

        if (pos == 0) {
            Item *temp = primeiroItem;
            primeiroItem = primeiroItem->proximo;
            delete temp;
        } else {
            primeiroItem->RemoveAt(pos - 1);
        }
        qt--;
    }

    void exibirItem(int pos) {
        if (primeiroItem == nullptr) {
            cout << "Lista vazia!\n";
            return;
        }
        primeiroItem->MostrarPosicao(pos);
    }

    void exibirLista() {
        if (primeiroItem == nullptr) {
            cout << "Lista vazia!\n";
            return;
        }
        primeiroItem->MostrarNormal();
        cout << endl;
    }

    void exibirListaInversa() {
        if (primeiroItem == nullptr) {
            cout << "Lista vazia!\n";
            return;
        }
        primeiroItem->MostrarInversa();
        cout << endl;
    }

    void liberarMemoria() {
        if (primeiroItem != nullptr) {
            primeiroItem->Liberar();
            primeiroItem = nullptr;
        }
        qt = 0;
    }
};

int main() {
    ListaInteiro lista;


    lista.addFinalDaLista(5);
    lista.addFinalDaLista(8);
    lista.addFinalDaLista(12);

    cout << "Lista normal: ";
    lista.exibirLista();

    lista.addPosicao(1, 25);
    cout << "Inserindo em uma posicao: ";
    lista.exibirLista();

    lista.removerItem(2);
    cout << "Removendo em uma posicao: ";
    lista.exibirLista();

    cout << "Exibindo valor especifico na lista: ";
    lista.exibirItem(1);

    cout << "Lista inversa: ";
    lista.exibirListaInversa();

    lista.liberarMemoria();
}