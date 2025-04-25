 #include <stdio.h>

 int main(int argc, char* argv[])
{
 int alunos;

 printf("digite o numero de alunos na turma:");
 scanf("%d",&alunos);
 
 if(alunos >0 )
  { float notas[alunos];
    float total = 0;
    float media = 0;
    int x = 0; 
    int aprovados = 0;
    int posicao, simnao;
    //leitor de notas
    for(int x = 0; x < alunos;++x){
     do{
      printf("digite a nota do aluno %d: ",x);
      scanf("%f",&notas[x]);
      if(notas[x] < 0 || notas[x] > 10){printf("erro, a nota deve ser entre (0 e 10)\n");}
     }while (notas[x] > 10 || notas[x] < 0);
    }
    // media de notas
   float menor = notas[0];
   float maior = notas[0];

   for(int x = 0; x < alunos;++x)
    total += notas[x];
    media = total / alunos;
    printf("a media da nota dos alunos: %.2f\n",media);

    //menor nota e maior
   for(int x = 0; x < alunos;++x){
    if(notas[x] < menor){menor = notas[x];}
    if(notas[x] > maior){maior = notas[x];}
   }
    printf("menor nota: %.2f\n", menor);
    printf("maior nota: %.2f\n", maior);

    //aprovados ou não
    for(int x = 0; x < alunos;++x)
    if(notas[x] >= 6){aprovados++;}
    printf("quantidade de alunos que passaram: %d\n", aprovados);
    
    //nota que deseja ver
    printf("deseja ver a nota de algum aluno? sim(1) nao(2)");
    scanf("%d",&simnao);
    if(simnao < 1 || simnao > 2){printf("o programa sera finalizado por escolher um numero invaliro");}
    if(simnao == 2){printf("programa encerado");}
    if(simnao == 1){printf("digite a posicao do aluno que deseja ver a nota (0 ate %d): ", alunos - 1);
     scanf("%d", &posicao);

     if (posicao >= 0 && posicao < alunos){printf("a nota do aluno na posicao %d e: %.2f\n", posicao, notas[posicao]);}
     else {printf("Posicao invalida, deve ser entre 0 e %d.\n", alunos - 1);}
    }
  }
  else {printf("numero de alunos invalido ");}
  
 return 0;  
}   