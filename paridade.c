#include <stdio.h>

int qtdPar = 0, qtdImpar = 0, qtdPos = 0, qtdNeg = 0;

int paridade (int valor) {
    if (valor % 2 == 0) {
        qtdPar++;
    } else {
        qtdImpar++;
    }
    return 0;
}

int verificacao (int sinal) {
    if (sinal > 0){
        qtdPos++;
    } else if (sinal < 0) {
        qtdNeg++;
    }
    return 0;
}


int main () {
    int valorUm, valorDois, valorTres, valorQuatro, valorCinco;
    scanf ("%i", &valorUm);
    scanf ("%i", &valorDois);
    scanf ("%i", &valorTres);
    scanf ("%i", &valorQuatro);
    scanf ("%i", &valorCinco);
    
    paridade(valorUm);
    paridade(valorDois);
    paridade(valorTres);
    paridade(valorQuatro);
    paridade(valorCinco);

    verificacao(valorUm);
    verificacao(valorDois);
    verificacao(valorTres);
    verificacao(valorQuatro);
    verificacao(valorCinco);

    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", qtdPar, qtdImpar, qtdPos, qtdNeg);

    return 0;
}