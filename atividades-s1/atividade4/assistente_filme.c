 #include <stdio.h>

 int main(int argc, char* argv[])
{
    int escolha,leve,intenso,terror,acao;

    printf("escolha o tipo de filme leve(1) ou intenso(2): ");  
    scanf("%d",&escolha);
    if (escolha <1 || escolha >2){printf("valor invalido");}

    if (escolha == 1)
    {
        printf("escolha o genero comedia(1) ou animacao(2): ");
        scanf("%d",&leve);
        if (leve <1 || leve >2){printf("escolha invalida");}

        if (leve == 1){printf("assista ao filme: os farofeiros");}
        if (leve == 2){printf("assista ao filme: como treinar o seu dragao");}
    }
    if (escolha == 2)
    {
        printf("escolha o genero terror(1) ou acao(2): ");
        scanf("%d",&intenso); 
        if(intenso <1 || intenso >2 ){printf("valor invalido");}

        if(intenso == 1)
        {
         printf("terror psicologico(1) ou natural(2): "); scanf("%d",&terror);
         if(terror <1 ||terror >2) {printf("valor invalido");}
         if(terror == 1){printf("assista ao filme: corra");}
         else{printf("assista ao filme: invocacao do mal");}
        }
        if(intenso == 2)
        {
         printf("acao do tipo super heroi(1) ou realista(2): "); scanf("%d",&acao);
         if(acao <1 || acao >2){printf("valor invalido");} 
         if(acao == 1){printf("assista ao filme: incrivel hulk");}
         else{printf("assista ao filme: mad max");}
        }    
    }
 return 0;  
}