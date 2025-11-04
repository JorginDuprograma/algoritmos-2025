#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "musica.h"

int main(){

    Item * D = criarItem("aquarela","Toquinho", 1983);
    Item * E = criarItem("romaria","Renato Teixeira", 1978);
    Item * F = criarItem("eu nasci ha de mil anos atras","Raul Seixas", 1976);
    Item * G = criarItem("calice","Chico Buarque e Gil", 1978);
    Item * H = criarItem("tempo perdido","Renato Russo",1986);

    //construindo o encadeamento

    D->anterior = NULL;
    D->posterior = E;
    E->anterior = D;
    E->posterior = F;
    F->anterior = E;
    F->posterior = G;
    G->anterior = F;
    G->posterior = H;
    H->anterior = G;
    H->posterior = NULL;

    //atvd

   
}