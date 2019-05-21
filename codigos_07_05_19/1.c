
#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia numeros 
 * inteiros no intervalo [0,50] e os armazene em um ´
vetor com 10 posicões. 
 * Preencha um 
 * segundo vetor apenas com os numeros ımpares
do primeiro vetor. Imprima os dois vetores, 
 * 2 elementos por linha*/


int main() {
    int vetor[10];

    int i, aux = -1;
    for (i = 0; i < 10; i++) {
        scanf("%d", &aux);
        while (aux < 0 || aux > 50) {
            scanf("%d", &aux);
        }
        vetor[i] = aux;
    }

    int segundo[10];
    int x = 0;
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            segundo[x] = vetor[i];
            x = x + 1;
        }
    }

    for (i = 0; i < x; i++) {
        printf("%d | ", segundo[i]);
    }


    return (0);
}

