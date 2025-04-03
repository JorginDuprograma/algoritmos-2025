#include <stdio.h>
#include <math.h>
#define Pi = 3.14
int main(int argc, char* argv[])
{
    float b,circulo

    printf("digite o raio: ");
     scanf("%f", &b); 

     circulo = (b * b) * Pi ;
     printf("a area do circulo e: %.2f\n",circulo);
}
return 0;