#include <stdio.h>
 
int main() {
    float valor;

    scanf("%f", &valor);

    if (valor <= (float)25 && valor > (float)0){
        printf("Intervalo [0,25]\n");
    } else if(valor <= (float)50 && valor > (float)0){
        printf("Intervalo (25,50]\n");
    } else if (valor <= (float)75 && valor > (float)0){
        printf("Intervalo (50,75]\n");
    } else if (valor <= (float)100 && valor > (float)0) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
    
    return 0;
}