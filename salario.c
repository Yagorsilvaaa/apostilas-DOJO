#include <stdio.h>

int main() {
    int number; 
    int A;
    float salary;
    float B;

    scanf("%i", &number);
    scanf("%i", &A);
    scanf("%f", &B);

    salary = A * B;

    printf("NUMBER = ");
    printf("%i\n", number);
    printf("SALARY = U$ ");
    printf("%.2f", salary);
    
    return 0;
}
