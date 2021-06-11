#include <stdio.h>

int main () {
    int N;
    long V;
    float Nplacas;
    float porcentagem;
    float valor;
    int resultado;

    scanf ("%i %i", &N, &V);

    porcentagem = 0.1;
    Nplacas = N * V;

    if (V >= 1 && N <= 10000) {
        for (int a = 0; a < 9; a++){
            valor = Nplacas*porcentagem;
            resultado = (int)valor;

            if (resultado < valor){
                resultado++;
            }

            printf ("%i ", resultado);
            porcentagem += 0.1;
        }
    }
    
    return 0;
}
