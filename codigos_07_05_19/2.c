#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Somar os elementos que estão pra baixo da diagonal principal e da diagonal secundária de uma matriz 11x11*/

int main() {
    int matriz[11][11];
    int i;
    srand(time(NULL));
    for (i = 0; i < 11; i++) { //Povoamento de dados
        for (int j = 0; j < 11; j++) {
            matriz[i][j] = rand() % 5;
        }
    }
    for (i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    int soma = 0;
    for (i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            if (j < i) {
                if (i + j > 10) {
                    soma = soma + matriz[i][j];
                    printf("%d ", matriz[i][j]);
                }
            }
        }
    }
    printf("\n");
    printf("\n");

    printf("Soma: %d ", soma);

    return (0);
}


