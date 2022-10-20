#include <stdio.h>
#include <stdarg.h>
#include "Mates.h"

int main(void)
{
    printf("--OPERACIONS--");
    printf("Suma: 1749.34 + 12.300021 = %f\n",Suma(1749.34,12.300021));
    printf("Resta: 23 - 5 = %f\n",Resta(23,5));
    printf("Multiplicació: 32*61 = %f\n",Suma(5,3));
    printf("Divisió: 23/7 = %f\n",Divisio(5,3));
    printf("Quadrat: 11^2 = %f\n",Quadrat(11));
    printf("Cub: 5^3 = %f\n",Cub(5));
    printf("Exponent: 2^25 = %f\n",Exponent(2,25));
    printf("--CONSTANTS--");
    printf("Pi:  %f\n", PI);
    printf("Tau: %f\n", TAU);
    printf("Phi: %f\n", PHI);
    printf("E:   %f\n", E);

    return 0;
}