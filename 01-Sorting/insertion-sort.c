/*
    Program: Insertion Sort

    Description:
    This program sorts an array in ascending order
    using the Insertion Sort algorithm.

    Time Complexity:
    Best Case: O(n)
    Average Case: O(n^2)
    Worst Case: O(n^2)

    Auxiliary Space Complexity: O(1)
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    int a[100];
    int key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}