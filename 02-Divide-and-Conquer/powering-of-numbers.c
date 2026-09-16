/*
    Program: Powering of Numbers using Divide and Conquer

    Algorithm:
    1. If n == 0, return 1.
    2. If n == 1, return a.
    3. Calculate x = power(a, floor(n/2)).
    4. If n is even, return x * x.
    5. If n is odd, return x * x * a.

    Time Complexity: O(log n)
    Space Complexity: O(log n) due to recursive calls.
*/

#include <stdio.h>

long long power(long long a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return a;
    }

    long long x = power(a, n / 2);

    if (n % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return x * x * a;
    }
}

int main()
{
    long long a;
    int n;

    printf("Enter the base: ");
    scanf("%lld", &a);

    printf("Enter the exponent: ");
    scanf("%d", &n);

    printf("Result = %lld\n", power(a, n));

    return 0;
}