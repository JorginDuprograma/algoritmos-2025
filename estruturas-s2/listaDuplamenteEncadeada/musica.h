#ifndef MUSICA_H
#define MUSICA_H    

typedef struct Item{
    char Titulo[50];
    char autor[100];
    int ano;

    struct item * anterior;
    struct item * posterior;
} Item;

    Item * criarItem(char * titulo, char * autor, int ano);
#endif