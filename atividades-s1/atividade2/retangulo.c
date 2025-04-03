#include <stdio.h>
#include <math.h>

 int main(int argc, char* argv[])
 {
 float retangulo,b,h


printf("digite a base: ");
     scanf("%f", &b);
     printf("digite a altura: ");
     scanf("%f", &h);   

     retangulo = b * h;
     printf("a area do retangulo e: %.0f\n",retangulo);
 return 0;  
}   