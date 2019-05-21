/*
 * strcpy(string_destino, string_origem);
 * strncpy(string_destino, string_origem, tamanho);
 * strcat(string_destino, string_origem);
 * strncat(string_destino, string_origem, tamanho);
 * strlen(str)
 * strcmp(str1, str2)
 * fgets( str, STRSIZE, stdin );
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//URI: 2764
int main() {
    char data[9];
    scanf("%s", data);
    char dia[3];
    dia[0] = data[0];
    dia[1] = data[1];
    dia[2] = '\0';
    char mes[3];
    mes[0] = data[3];
    mes[1] = data[4];
    mes[2] = '\0';
    char ano[3];
    ano[0] = data[6];
    ano[1] = data[7];
    ano[2] = '\0';

    printf("%s/%s/%s\n", mes, dia, ano);
    printf("%s/%s/%s\n", ano, mes, dia);
    printf("%s-%s-%s", dia, mes, ano);
    return (0);
}












