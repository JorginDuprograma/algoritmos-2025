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

void empilha(Pilha * P, Item * I){

    I->Antereior;
    P->topo;
    P->tamanho;

}


#endif