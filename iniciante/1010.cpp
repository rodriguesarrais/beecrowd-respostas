#include <iostream>

int main()
{
    double raio, pi;
    pi =3.14159;
    
    scanf("%lf ", &raio);
    
    double x = (4/3.0) * pi * (raio*raio*raio);
    
    printf("VOLUME = %0.3lf\n", x);

    return 0;
}