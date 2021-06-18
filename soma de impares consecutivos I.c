#include <stdio.h>

int main () {

    int valorUm, valorMenor, valorMaior, valorDois, valorPSomar = 0, valorSoma = 0; 
    scanf ("%i", &valorUm);
    scanf ("%i", &valorDois);

    if (valorUm >= valorDois) {
        valorMaior = valorUm;
        valorMenor = valorDois;
    } else {
        valorMaior = valorDois;
        valorMenor = valorUm;
    }

    if (valorUm == valorDois){
        valorSoma = 0;
    } 
    else {
        if(valorMenor % 2 == 0 && valorMaior % 2 == 0) {
            
            valorPSomar = valorMenor + 1;
            valorSoma = valorPSomar;

            while (valorPSomar < valorMaior){
                valorPSomar += 2;
                
                if (valorPSomar < valorMaior){
                    valorSoma += valorPSomar;
                } else {
                    break;
                }
            }

        } else if (valorMenor % 2 == 0 && valorMaior % 2 != 0) {
            
            valorPSomar = valorMenor + 1;

            if (valorPSomar != valorMaior) {
                valorSoma = valorPSomar;
            } else {
                valorSoma = 0;
            }

            while (valorPSomar < valorMaior){
                valorPSomar += 2;
                
                if (valorPSomar < valorMaior){
                    valorSoma += valorPSomar;
                } else {
                    break;
                }
            }

        } else if (valorMenor % 2 != 0 && valorMaior % 2 != 0) {
            
            valorPSomar = valorMenor + 2;

            if (valorPSomar != valorMaior) {
                valorSoma = valorPSomar;
            } else {
                valorSoma = 0;
            }
            
            while (valorPSomar < valorMaior){
                valorPSomar += 2;
                
                if (valorPSomar < valorMaior){
                    valorSoma += valorPSomar;
                } else {
                    break;
                }
            }

        } else if (valorMenor % 2 != 0 && valorMaior % 2 == 0){

            valorPSomar = valorMenor + 2;

            if (valorPSomar > valorMaior){
                valorSoma = 0;
            } else {
                valorSoma = valorPSomar;
            }
            
            while (valorPSomar < valorMaior){
                valorPSomar += 2;
                
                if (valorPSomar < valorMaior){
                    valorSoma += valorPSomar;
                } else {
                    break;
                }
            }

        }
    }
    
    printf ("%i\n", valorSoma);
    
    return 0;
}