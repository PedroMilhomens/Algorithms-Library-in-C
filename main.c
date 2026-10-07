#include <stdio.h>
#include "algorithms.h"

int main()
{
    // 10 to the 2°
    printf("%d\n", power(10, 2));

    // Square root of 81
    printf("%.1f\n", sqrt(81));

    // factorial 5!
    printf("%lld\n", factorial(5));

    // baskara
    Roots test = baskara(1, 7, 10);
    if (test.has_real_roots)
    {
        printf("X1 = %.1f\n", test.x1);
        printf("X2 = %.1f\n", test.x2);
    }

    return 0;
}
