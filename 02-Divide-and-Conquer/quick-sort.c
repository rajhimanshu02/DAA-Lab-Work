/*
    Program: Quick Sort

    Description:
    This program sorts an array in ascending order
    using the Quick Sort algorithm.

    Pivot Selection:
    The first element is selected as the pivot.

    Working:
    1. Select the first element as pivot.
    2. Partition the array around the pivot.
    3. Place the pivot at its correct position.
    4. Recursively sort the left and right subarrays.

    Time Complexity:
    Best Case: O(n log n)
    Average Case: O(n log n)
    Worst Case: O(n^2)

    Auxiliary Space Complexity:
    Best/Average Case: O(log n)
    Worst Case: O(n)
*/

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while(a[j] > pivot)
        {
            j--;
        }

        while(a[i] <= pivot && i < j)
        {
            i++;
        }

        if(i < j)
        {
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[low], &a[j]);

    return j;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int pivotIndex = partition(a, low, high);

        quickSort(a, low, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, high);
    }
}

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

    quickSort(a, 0, n - 1);

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}