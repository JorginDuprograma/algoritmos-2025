 #include <stdio.h>
 #include <math.h>
 int main(int argc, char* argv[])
{
float IMC,peso,altura;   

   printf("digite o peso: ");
   scanf("%f",&peso);
   printf("digite a altura: ");
   scanf("%f",&altura);

   altura = (altura*altura);
   IMC = peso/altura;

   printf("o valor do IMC e: %.2f\n",IMC);

    if (IMC < 18.5) { printf("abaixo do peso normal"); }
    else if (IMC >= 18.5 || IMC < 25) { printf("peso normal"); }
    else if (IMC >= 25 || IMC <30) { printf("excesso de peso"); }
    else if (IMC >= 30 || IMC <35) { printf("obesidade tipo 1"); }
    else if (IMC >= 35 || IMC <40) { printf("obesidade tipo 2"); }
    else if (IMC >= 40) { printf("obesidade tipo 3"); }

 return 0;  
}   