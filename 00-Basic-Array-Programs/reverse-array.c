/*
    Program: Reverse an Array

    Description:
    This program reads the elements of an array
    and reverses the array using two pointers.

    Time Complexity: O(n)
    Auxiliary Space Complexity: O(1)
*/

#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int left, right, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    left = 0;
    right = n - 1;

    while(left < right)
    {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }

    printf("Reversed array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}