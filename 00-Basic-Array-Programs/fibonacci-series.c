/*
    Program: Fibonacci Series using Iterative and Recursive Methods

    Iterative Method:
    Uses a loop to generate the Fibonacci series.

    Recursive Method:
    Uses the formula:
    fib(n) = fib(n-1) + fib(n-2)

    Time Complexity:
    Iterative  : O(n)
    Recursive  : O(2^n)
*/

#include <stdio.h>

int fibonacciRecursive(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

void fibonacciIterative(int n)
{
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Series using Iterative Method:\n");
    fibonacciIterative(n);

    printf("\n\nFibonacci Series using Recursive Method:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacciRecursive(i));
    }

    printf("\n");

    return 0;
}