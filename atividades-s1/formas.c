 #include <stdio.h>
 #include <math.h>
 #define Pi 3.14

 int main(int argc, char* argv[])
{
    float area,b,B,h;
    float triangulo,retangulo,quadrado,trapezio,losango,circulo;
    int escolha;

    printf("escolha a forma geometrica que deseja calcular:\n");
    printf("1-triangulo\n");
    printf("2-retangulo\n");
    printf("3-quadrado\n");
    printf("4-trapezio\n");
    printf("5-losango\n");
    printf("6-cirulo\n");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 6) {printf("valor invalido");}
    else if(escolha == 1){
     printf("digite a base: ");
     scanf("%f", &b);
     printf("digite a altura: ");
     scanf("%f", &h);   

     triangulo = b * h / 2;
     printf("a area do triangulo e: %.0f\n",triangulo);
    }
    else if(escolha == 2){
     printf("digite a base: ");
     scanf("%f", &b);
     printf("digite a altura: ");
     scanf("%f", &h);   

     retangulo = b * h;
     printf("a area do retangulo e: %.0f\n",retangulo);
    }
    else if(escolha == 3){
     printf("digite a base: ");
     scanf("%f", &b);  

     quadrado = b * 2;
     printf("a area do quadrado e: %.0f\n",quadrado);
    }
    else if(escolha == 4){
     printf("digite a base maior: ");
     scanf("%f", &B);
     printf("digite a base menor: ");
     scanf("%f", &b);
     printf("digite a altura: ");
     scanf("%f", &h);   

     trapezio = ((b + B) * h) /2;
     printf("a area do trapezio e: %.0f\n",trapezio);
    }
    else if(escolha == 5){
     printf("digite a diagonal maior: ");
     scanf("%f", &B);
     printf("digite a diagonal menor: ");
     scanf("%f", &b);   

     losango = (B * b) / 2;
     printf("a area do losango e: %.0f\n",losango);
    }
    else if(escolha == 6){
     printf("digite o raio: ");
     scanf("%f", &b); 

     circulo = (b * b) * Pi ;
     printf("a area do circulo e: %.2f\n",circulo);
    }
 return 0;  
}    