#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 5) {
        printf("Número de argumentos inválido.\n");
        return 1;
    }

    int Xa = atoi(argv[1]);
    int Xb = atoi(argv[2]);
    int Ya = atoi(argv[3]);
    int Yb = atoi(argv[4]);

    int Tx = Xb - Xa;
    int Ty = Yb - Ya;

    float distancia = sqrt((Tx * Tx) + (Ty * Ty));

    printf("A distância dos pontos e: %.2f\n", distancia);

    return 0;
}