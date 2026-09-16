/*
    Program: Find Largest Element in an Array

    Description:
    This program reads the elements of an array
    and finds the largest element.

    Time Complexity: O(n)
    input Space Complexity: O(n)
    Auxiliary Space Complexity: O(1)
*/

#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}