/*
    Program: Sum and Average of Array Elements

    Description:
    This program reads the elements of an array,
    calculates their sum and average, and displays the results.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/
#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}