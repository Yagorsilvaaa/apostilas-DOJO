#include <stdio.h>

int main () {
    int menor, posicao, atual, quantidade;
    scanf ("%i", &quantidade);
    scanf ("%i", &menor);
    int i;

    for (i = 1; i<quantidade; i++){
        scanf ("%i", &atual);
        
        if (atual < menor) {
            menor = atual;
            posicao = i;
        }

    }

    printf ("Menor valor: %i\nPosicao: %i\n", menor, posicao);

    return 0;
}