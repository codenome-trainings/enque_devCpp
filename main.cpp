#include <iostream>
#include <queue>
#include "deque.h"

using namespace std;

deque<int> numeros;

void menu();

int main() {
    menu();
    return 0;
}


void menu() {

    int escolha = -9999;
    int numero = -8889;

    cout << "------------------------" << endl;
    cout << "---- Menu principal ----" << endl;
    cout << "------------------------" << endl << endl;

    cout << "[1]\tAdicionar cliente no Fim da lista" << endl;
    cout << "[2]\tRemove elemento do topo da lista" << endl;
    cout << "[3]\tTamanho da lista" << endl;
    cout << "[4]\tVerifica se a lita esta vazia" << endl;
    cout << "[5]\tAcessa o elemento do topo" << endl;
    cout << "[6]\tAcessa o ultimo elemento" << endl;
    cout << "[7]\tImprime tudo" << endl;
    cout << "[0]\tFim" << endl << endl;

    cout << "DIGITE UMA OPCAO VALIDA: ";
    cin.clear();
    cin >> escolha;

    switch(escolha) {
        case 0:
            return;

        case 1:
            cout << "Digite um numero: ";
            cin >> numero;
            numeros = insere(numeros, numero);
            break;

        case 2:
            numeros = remove(numeros);
            break;

        case 3:
            tamanhoDaLista(numeros);
            break;

        case 4:
            estaVazia(numeros);
            break;

        case 5:
            exibrValorDoTopoDaLista(numeros);
            break;

        case 6:
            exibrValorDoFimDaLista(numeros);
            break;

        case 7:
            imprimeTudo(numeros);
            break;

        default:
            cout << "Opcao invalida! Tente novamente!" << endl << endl;

    }

    menu();

}
