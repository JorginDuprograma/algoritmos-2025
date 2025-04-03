#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    float B,b,h,trapezio
     printf("digite a base maior: ");
     scanf("%f", &B);
     printf("digite a base menor: ");
     scanf("%f", &b);
     printf("digite a altura: ");
     scanf("%f", &h);   

     trapezio = ((b + B) * h) /2;
     printf("a area do trapezio e: %.0f\n",trapezio);
}
return 0;