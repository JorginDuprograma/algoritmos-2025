 #include <stdio.h>
 #include <stdlib.h>
 int main(int argc, char* argv[]){
    if (argc != 4) {
        printf("numero de argumentos invalido");
        return 1; // Código de erro
    }    
    int inteiro1 = atoi(argv[1]);
    int inteiro2 = atoi(argv[2]);
    int inteiro3 = atoi(argv[3]);

    if(inteiro1 >= inteiro2 || inteiro3 < inteiro1 || inteiro3 > inteiro2){
        printf("valores invalidos, (menor) (maior) (oque escolheu)");=
    }
    else{
        srand(time(NULL));
        int random_number =    
    }

  return 0;  
 }   