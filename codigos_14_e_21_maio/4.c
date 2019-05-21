#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#Encontrar palavra dentro de uma matriz de caracteres

int main() {
    char matriz[7][7] = {
        {"akgrtta"},
        {'b', 'd', 'i', 's', 'e', 'c', 'a'},
        {'c', 'c', 'a', 'r', 'r', 'o', 'q'},
        {'a', 'a', 'g', 'p', 'b', 't', 's'},
        {'r', 'r', 's', 'b', 'c', 'v', 'l'},
        {'r', 'a', 'c', 'w', 'l', 'c', 'v'},
        {'o', 'o', 'a', 'a', 'r', 'r', 'o'}
    };
    char palavra[6] = "carro";
    int tam_palavra = strlen(palavra);
    int qtdColunas = 7;
    int qtdLinhas = 7;
    int i, j;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (matriz[i][j] == palavra[0]) {
                if (qtdColunas - j >= tam_palavra) {
                    int auxiliar = j;
                    int contador = 0;
                    while (matriz[i][auxiliar++] == palavra[contador]
                            && contador++ < tam_palavra);
                    if (contador == tam_palavra) {
                        printf("Encontrou a palavra %s na posição %d %d na horizontal\n", palavra, i, j);
                    }
                }
            }
            if (matriz[i][j] == palavra[0]) {
                if (qtdLinhas - i >= tam_palavra) {
                    int auxiliar = i;
                    int contador = 0;
                    while (matriz[auxiliar][j] == palavra[contador]
                            && contador < tam_palavra) {
                        auxiliar++;
                        contador++;
                    }
                    if (contador == tam_palavra) {
                        printf("Encontrou a palavra %s na posição %d %d na vertical\n", palavra, i, j);
                    }
                }
            }
	}
    }


    return (0);
}
