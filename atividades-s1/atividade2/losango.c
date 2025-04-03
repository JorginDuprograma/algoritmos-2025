#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    float B,b,losango
    printf("digite a diagonal maior: ");
     scanf("%f", &B);
     printf("digite a diagonal menor: ");
     scanf("%f", &b);   

     losango = (B * b) / 2;
     printf("a area do losango e: %.0f\n",losango);
}
return 0;