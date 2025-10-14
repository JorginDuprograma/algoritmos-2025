 #include <stdio.h>
 #include<stdlib.h>

 #define ERRO -1 // o elemento chave nao ta no vetor
 int PB(int * V, int N, int Chave); // PB = Pesquisa Binaria 

int main (){

    int Numeros [] = {1,2,4,5,6,7,8,10,12,14,16,18,20,21,22};
    int Tamanho = sizeof(Numeros) / sizeof(int);
    int Elemento = 12;
    int Posicao = PB(Numeros, Tamanho, Elemento);

    if(Posicao != ERRO) printf("A posicao eh %d.\n", Posicao);
    else printf("Elemento nao esta no vetor.\n");
}

int PB (int * V, int N, int Chave ){
    int Inicio = 0;
    int Fim = N - 1;

    while (Inicio <= Fim){
        int Meio = (Inicio + Fim) / 2;
        if (V[Meio] == Chave) return Meio;
        else if (V[Meio] < Chave) Inicio = Meio + 1;
        else Fim = Meio -1;     
    }
}  