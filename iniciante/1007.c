#include <stdio.h>
 
int main() {
 
    int a,b,c,d;
    
    scanf(" %i %i %i %i", &a,&b,&c,&d);
    
    int dif = (a*b)-(c*d);
    
    printf("DIFERENCA = %i\n", dif);
 
    return 0;
}