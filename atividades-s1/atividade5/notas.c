 #include <stdio.h>

 int main(int argc, char* argv[])
{
 int alunos;
 float notas;

 printf("digite o numero de alunos na turma:");
 scanf("%d",&alunos);
 if(alunos >0)do{
  printf("digite a nota dos alunos: ");
  scanf("%f",&notas);
 }while (notas <= alunos);

 return 0;  
}   