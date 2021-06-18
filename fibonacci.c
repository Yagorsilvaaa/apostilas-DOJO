#include <stdio.h>

int main () {
    
    int N, valorUm = 0, valorDois = 1, valor;

    scanf("%i", &N);

    if(N > 0 && N < 46) {

        for (int i = 0; i < N; i++){
            valor = valorUm;
            printf ("%i", valor);

            if (i < (N - 1)) {
                printf (" ");
            }

            valor = valorUm + valorDois;
            valorUm = valorDois;
            valorDois = valor;
        }

        printf ("\n");
    }
    
    return 0;
}