#include <stdio.h>
 
int main() {
 
    double a,b,c;
    
    scanf("%lf %lf %lf", &a,&b,&c);
    
    a = a*2;
    b = b*3;
    c = c*5;
    
    double media = (a+b+c)/10;
    
    printf("MEDIA = %0.1lf\n", media);
 
    return 0;
}