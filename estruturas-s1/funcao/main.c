 #include <stdio.h>
int ler_valor_valido(int opcao1, int opcao2, char* texto_opcao1,char* texto_opcao2, char*texto_adicional){
    int opcao_valida  
    do{printf("%s\nescolha uma opcao: \n%d - %s\n%d - %s", texto_adicional,opcao1,texto_opcao1,opcao2,texto_opcao2);
    scanf("%d", &opcao_valida);

    }while(opcao_valida != opcao1 && opcao_valida != opcao2);
    return opcao_valida;  
}

 int main(int argc, char* argv[])
{
  int opcao_valida, responder;
  do{
    printf("escolha uma opcao:\n1 -iniciar quiz\n0 - sair\n");
    scanf("%d", &opcao_valida);
  }while(opcao_valida != 1 && opcao_valida != 0);

 return 0;  
}   