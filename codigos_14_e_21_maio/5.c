
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#Calcular a transposta de uma matriz

int main() {
    srand(time(NULL));
    int matriz[5][5];
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 51;
            printf("%3d |", matriz[i][j]);
        }
	printf("\n");
    }
    printf("\n");
    printf("\n");

    int auxiliar[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            auxiliar[j][i] = matriz[i][j];
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%3d |", auxiliar[i][j]);
        }
	printf("\n");
    }


    return (0);
}



