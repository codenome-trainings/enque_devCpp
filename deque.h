//
// Created by thiago on 22/02/2018.
//

#ifndef FACULDADE_FILA_H
#define FACULDADE_FILA_H

#include <iostream>
#include <deque>

using namespace std;

void estaVazia(deque<int> numeros);
void tamanhoDaLista(deque<int> numeros);
void exibrValorDoTopoDaLista(deque<int> numeros);
void exibrValorDoFimDaLista(deque<int> numeros);
deque<int> insere(deque<int> numeros, int numero);
deque<int> remove(deque<int> numeros);
void imprimeTudo(deque<int> numeros);




#endif //FACULDADE_FILA_H
