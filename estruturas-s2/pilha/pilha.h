#ifndef PILHA_H
#define PILHA_H

typedef struct Item{

    int Chave;
    struct Item * Antereior;

}Item;

typedef struct Pilha{
    int tamanho;
    Item * topo;
}Pilha;

Item * criarItem(int Chave);
Pilha * criarPilha ();

void empilhar(Pilha * P, Item * I);
void desempilhar(Pilha * P);

#endif