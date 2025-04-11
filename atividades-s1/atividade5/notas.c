 #include <stdio.h>

 int main(int argc, char* argv[])
{
 int alunos;

 printf("digite o numero de alunos na turma:");
 scanf("%d",&alunos);
 float notas[alunos];

 if(alunos >0)
  { 
   do{
   printf("digite a nota dos alunos: ");
   scanf("%f",&notas);
   }while (notas <= alunos);
  }
 else {printf("numero de alunos invalido ");}

 return 0;  
}   