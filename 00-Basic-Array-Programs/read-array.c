/*
    Program: Read and Display Array Elements

    Description:
    This program reads the elements of an array from the user
    and displays all the elements.

    Time Complexity:
    O(n)

    Space Complexity:
    O(n)
*/

#include <stdio.h>

int main()
{
    int n, i;
    int a[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
