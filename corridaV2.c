#include <stdio.h>

int main () {
    long N;
    long V;
    long resposta;
    float valor;
    float Nplacas;
    float resto;
    float num;

    scanf ("%li %li", &N, &V);

    num = 1;
    Nplacas = N * V;

    if (V >= 1 && N <= 10000) {
       
        for (int a = 0; a < 9; a++){
            valor = Nplacas * (num/10);
            resto = valor - (long)valor;
            num += 1;
            
            if (resto > 0) {
                valor++;
            }

            resposta = valor;

            if (a < 8) {
                printf ("%li ", resposta);
            } else {
                printf ("%li\n", resposta);
            }
            
        }
    }

    return 0;

}