#include "algorithms.h"

int power(int base, int exp)
{
    if (exp == 0) return 1;
    if (exp == 1) return base;

    return base * power(base, exp - 1);
}

double sqrt(double x)
{
    double y = x;
    if (x == 0) return x;

    for (int i = 1; i < 20; i++)
    {
        y = (y + x / y) / 2;
    }
    return y;
}

long long factorial(int n)
{
    long long res = 0;
    if (n == 0 || n == 1) return 1;

    for (int i = n; i > 0; i--) {
        if (i == n) { res = i; }
        else { res *= i; }
    }

    return res;
}

Roots baskara(int a, int b, int c)
{
    Roots res;
    double delta = power(b, 2) - (4 * c * a);

    if (delta < 0)
    {
        res.has_real_roots = false;
        return res;
    }

    res.x1 = (-b + sqrt(delta)) / (2 * a);
    res.x2 = (-b - sqrt(delta)) / (2 * a);
    res.has_real_roots = true;
    return res;

}