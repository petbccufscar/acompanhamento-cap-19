
#include <stdio.h>
#include <stdlib.h>

/*Fazer a matriz resultante da soma de elemento de duas matrizes, elemento por elemento*/

int main() {

    int matriz1[5][5];
    int matriz2[5][5];
    int i;
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz1[i][j] = rand() % 5;
            matriz2[i][j] = rand() % 5;
        }
    }
    int matrizsoma[5][5];
    for (i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrizsoma[i][j] = matriz1[i][j]
                    + matriz2[i][j];
        }
    }

    for (i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrizsoma[i][j]);
        }
        printf("\n");
    }

    return (0);
}

