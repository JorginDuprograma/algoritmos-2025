 #include <stdio.h>
 #define TAM 25
 int main(int argc, char* argv[])
{
 char palavra[] = "conhecimento";
 char palavra2 = {'b','o','b','/\0'};
 char frase1[TAM];
    printf("%s", palavra);
    printf("%s",palavra2);
    printf("palavra2[1] = %c\n", palavra2[1]);

    //leitura segura de strings
    printf("digite uma frase: ");
    fgets(frase1, TAM, stdin);
    printf("%s\n",frase1);

 return 0;  
}   