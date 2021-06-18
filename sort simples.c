#include <stdio.h>

int main () {

    int valorUm, valorDois, valorTres;
    scanf("%i", &valorUm);
    scanf("%i", &valorDois);
    scanf("%i", &valorTres);

    if (valorUm > valorDois && valorUm > valorTres) {
        if (valorDois > valorTres){
            printf("%i\n%i\n%i\n\n", valorTres, valorDois, valorUm);
        } else {
            printf("%i\n%i\n%i\n\n", valorDois, valorTres, valorUm);
        }
    } else if (valorDois > valorTres && valorDois > valorUm) {
        if (valorUm > valorTres) {
            printf("%i\n%i\n%i\n\n", valorTres, valorUm, valorDois);
        } else {
            printf("%i\n%i\n%i\n\n", valorUm, valorTres, valorDois);
        }
    }else if (valorTres > valorDois && valorTres > valorUm){
        if (valorUm > valorDois){
            printf("%i\n%i\n%i\n\n", valorDois, valorUm, valorTres);
        } else {
            printf("%i\n%i\n%i\n\n", valorUm, valorDois, valorTres);
        }
    }

    printf ("%i\n%i\n%i\n", valorUm, valorDois, valorTres);

    return 0;
}