  GNU nano 2.0.9             /

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#Exercício do URI para gerar uma matriz específica

int main() {
    int n;
    do {
        scanf("%d", &n);

        int matriz[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = abs(i - j) + 1;
            }
	}

	for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
	if (n != 0) printf("\n");
    } while (n != 0);




    return (0);
}



