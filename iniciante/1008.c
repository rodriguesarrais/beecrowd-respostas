#include <stdio.h>
 
int main() {
 
    int numero, horas;
    double valor;
    scanf("%i %i %lf", &numero, &horas, &valor);
    
    double salario = horas*valor;
    
    printf("NUMBER = %i\n", numero);
    printf("SALARY = U$ %0.2lf\n",salario);
 
    return 0;
}