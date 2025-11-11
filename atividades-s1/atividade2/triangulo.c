 #include <stdio.h>
 #include <math.h>

 int main(int argc, char* argv[])
 {
 float triangulo,b,h;


printf("digite a base: ");
     scanf("%f", &b);
     printf("digite a altura: ");
     scanf("%f", &h);   

     triangulo = b * h / 2;
     printf("a area do triangulo e: %.0f\n",triangulo);
 return 0;  
}   