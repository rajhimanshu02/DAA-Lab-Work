/*
    Program: Selection Sort

    Description:
    This program sorts an array in ascending order
    using the Selection Sort algorithm.

    Time Complexity:
    Best Case: O(n^2)
    Average Case: O(n^2)
    Worst Case: O(n^2)

    Auxiliary Space Complexity: O(1)
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    int a[100];
    int minIndex;
    int temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}