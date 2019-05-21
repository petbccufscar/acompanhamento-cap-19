#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#Verificar se todos os colchetes e chaves são fechados em uma String.
int main() {

    char vetor[50];
    scanf("%s", vetor);

    int contador_1 = 0; //{ }
    int contador_2 = 0; //[ ]

    for (int i = 0; i < strlen(vetor); i++) {
        if (vetor[i] == '{')
            contador_1++;
        else if (vetor[i] == '[') {
            contador_2++;
        } else if (vetor[i] == '}')
            contador_1--;
        else if (vetor[i] == ']')
            contador_2--;
    }
    if (contador_1 == 0 && contador_2 == 0) {
        printf("String correta!");
    } else {
	printf("String incorreta!");
    }
    return (0);
}



