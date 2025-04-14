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
    int posicao;

   do{
    printf("digite a nota do aluno %d: ",x);
    scanf("%f",&notas[x]);
    if(notas[x] < 0 || notas[x] > 10){printf("nota invalida, digite uma nota entre 0 e 10");}
    x++;
   }while (x < alunos);

   float menor = notas[0];
   float maior = notas[0];

   for(int x = 0; x < alunos;++x)
    total += notas[x];
    media = total / alunos;
    printf("a media da nota dos alunos: %.2f\n",media);

   for(int x = 0; x < alunos;++x){
    if(notas[x] < menor){menor = notas[x];}
    if(notas[x] > maior){maior = notas[x];}
   }
    printf("menor nota: %.2f\n", menor);
    printf("maior nota: %.2f\n", maior);

    for(int x = 0; x < alunos;++x)
    if(notas[x] >= 6){aprovados++;}
    printf("quantidade de alunos que passaram: %d\n", aprovados);

    printf("digite a posicao do aluno que deseja ver a nota (0 ate %d): ", alunos - 1);
    scanf("%d", &posicao);

    if (posicao >= 0 && posicao < alunos){printf("a nota do aluno na posicao %d e: %.2f\n", posicao, notas[posicao]);}
    else {printf("Posicao invalida deve ser entre 0 e %d.\n", alunos - 1);}
  }
  else {printf("numero de alunos invalido ");}
  
 return 0;  
}   