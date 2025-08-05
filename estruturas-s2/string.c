 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

    typedef struct{
        char nome [150];
        char telefone[14];
        char endereco[200];

    } pessoa;
     int main(){

        pessoa X;

        strcpy(X.nome, "maria alves");
        strcpy(X.telefone, "(61) 12345-6789");
        strcpy(X.endereco, "SHIS 12 25 13");

        printf("%s\n%s\n%s\n", X.nome, X.endereco, X.telefone);
     return 0;  
     }