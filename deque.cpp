#include "deque.h"

void estaVazia(deque<int> numeros) {
    if (numeros.empty()) {
        cout << "A lista esta vazia" << endl << endl;
    } else {
        cout << "A lista nao esta vazia" << endl << endl;
    }
}

void tamanhoDaLista(deque<int> numeros) {
    if (numeros.empty()) {
        cout << "A lista esta vazia" << endl << endl;
        return;
    }
    cout << "Voce tem " << numeros.size() << " elementos na sua lista" << endl << endl;
}

void exibrValorDoTopoDaLista(deque<int> numeros) {
    if (numeros.empty()) {
        cout << "A lista esta vazia" << endl << endl;
        return;
    }
    cout << "O numero do topo de sua lista eh: " << numeros.front() << endl;
}


void exibrValorDoFimDaLista(deque<int> numeros) {
    if (numeros.empty()) {
        cout << "A lista esta vazia" << endl << endl;
        return;
    }
    cout << "O numero do fim da lista eh: " << numeros.back() << endl << endl;
}

deque<int> insere(deque<int> numeros, int numero) {
    numeros.push_back(numero);
    return numeros;
}

deque<int> remove(deque<int> numeros) {
    if (numeros.empty()) {
        cout << "A lista esta vazia" << endl << endl;
        return numeros;
    }

    numeros.pop_front();
    return numeros;
}

void imprimeTudo(deque<int> numeros) {

    if (numeros.empty()) {
        cout << "A lista esta vazia" << endl << endl;
        return;
    }

    for (deque<int>::iterator it=numeros.begin(); it != numeros.end(); ++it) {
        cout << ' ' << *it;
    }
    cout << endl << endl;
}
