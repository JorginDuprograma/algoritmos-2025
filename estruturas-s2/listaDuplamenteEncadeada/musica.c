#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "musica.h"

Item * criarItem(char * titulo, char * autor, int ano){

    Item * X = (Item*)malloc(sizeof(Item));
    if(X == NULL){
        printf("ERRO: nao foi possivel alocar memoria para o Item.\n");
    
        return NULL;
    }

    strcpy(X->Titulo, titulo);
    strcpy(X->autor, autor);
    X->ano = ano;
    X->anterior = NULL;
    X->posterior = NULL;

    return X;
}