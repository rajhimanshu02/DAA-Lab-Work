/*
    Program: Binary Search

    Description:
    This program searches for an element in a sorted array
    using the Binary Search algorithm.

    Working:
    Binary Search repeatedly divides the search range into
    two halves and compares the middle element with the
    target element.

    Requirement:
    The array must be sorted in ascending order.

    Time Complexity:
    Best Case: O(1)
    Average Case: O(log n)
    Worst Case: O(log n)

    Space Complexity:
    O(1)
*/

#include <stdio.h>

int binarySearch(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] == key)
        {
            return mid;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n, i, key, result;
    int a[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = binarySearch(a, n, key);

    if(result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}