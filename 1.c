#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[50];
    int i, j;
    char aux;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    
    i = 0;
    j = strlen(palavra) - 1;

    
    while (i < j) {
        aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
        
        i++; 
        j--; 
    }

    printf("Palavra invertida: %s\n\n", palavra);

    system("pause");
    
    return 0;
}