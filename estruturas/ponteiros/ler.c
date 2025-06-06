 #include <stdio.h>
 #define max_txt 256

 int main(int argc, char* argv[]){

    char texto[max_txt];
    FILE *sexta = folpen(argv[1], "r");

    if(sexta == NULL){
        printf("erro ao abrir arquivo");
        return 1; 
    }
    while (fgets(texto, max_txt,sexta))
    {
        fprintf(stdout, texto);
    }
    fclose(sexta);
    
 return 0;  
}   