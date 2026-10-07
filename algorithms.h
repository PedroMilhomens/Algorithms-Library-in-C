#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stdbool.h>

typedef struct
{
    double x1;
    double x2;
    bool has_real_roots;
} Roots;

int power(int base, int exp);

double sqrt(double x);

long long factorial(int n);

Roots baskara(int a, int b, int c);

#endif