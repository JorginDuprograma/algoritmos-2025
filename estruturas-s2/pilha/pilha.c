#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

Item * criarItem(int Chave){

    Item * I = (Item*) malloc(sizeof(Item));
    if (I == NULL){
        printf ("ERRO: nao foi possivel alocar memoria prar o item");
        return NULL;
    }

    I->Chave = Chave;
    I->Antereior = NULL;

    return I;
}

Pilha * criarPilha (){

    Pilha * P = (Item*) malloc(sizeof(Item));
    if (P == NULL){
        printf ("ERRO: nao foi possivel alocar memoria prar o item");
        return NULL;
    }

    P->tamanho = 0;
    P->topo = NULL;

    return P;
}

void empilhar (Pilha * P, Item * I){
    I->Antereior = P ->topo;
    P->topo = I;
    P->tamanho++;
}

void desempilhar(Pilha * p){

    if (p->tamanho == 0){
        printf("ERRO: a pilha esta vazia \n");
        return;
    }
    Item * I = p->topo;
    p->topo = I->Antereior;
    free(I);
    p->tamanho--;

}




