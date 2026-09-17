/*
    Program: Fractional Knapsack using Greedy Method

    Description:
    The Fractional Knapsack problem is solved using the Greedy
    Algorithm. For each item, the profit-to-weight ratio is
    calculated.

    The items are sorted in decreasing order of their
    profit-to-weight ratio using Quick Sort.

    The item with the highest ratio is selected first.
    If the complete item cannot fit into the knapsack,
    the required fraction of that item is selected.

    Time Complexity:
    Quick Sort Average Case: O(n log n)
    Quick Sort Worst Case: O(n^2)

    Space Complexity: O(n)

    Algorithm:
    1. Start.
    2. Read the number of items, their weights, profits and
       knapsack capacity.
    3. Calculate the profit-to-weight ratio for each item:
       
           Ratio = Profit / Weight

    4. Sort all items in decreasing order of their ratio
       using Quick Sort.
    5. Set totalProfit = 0.
    6. Start selecting items from the item with the highest
       ratio.
    7. If the complete item fits into the remaining capacity:
       - Select the complete item.
       - Subtract its weight from the remaining capacity.
       - Add its profit to totalProfit.
    8. If the complete item does not fit:
       - Calculate the fraction of the item that can be taken.
       - Add the corresponding fractional profit to totalProfit.
       - Set remaining capacity to 0.
       - Stop.
    9. Display the maximum profit.
    10. Stop.
*/

#include <stdio.h>

void quickSort(float ratio[], int weight[], int profit[],
               int low, int high)
{
    if(low < high)
    {
        float pivot = ratio[high];

        int i = low - 1;
        int j;

        for(j = low; j < high; j++)
        {
            if(ratio[j] > pivot)
            {
                i++;

                float tempRatio = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = tempRatio;

                int tempWeight = weight[i];
                weight[i] = weight[j];
                weight[j] = tempWeight;

                int tempProfit = profit[i];
                profit[i] = profit[j];
                profit[j] = tempProfit;
            }
        }

        float tempRatio = ratio[i + 1];
        ratio[i + 1] = ratio[high];
        ratio[high] = tempRatio;

        int tempWeight = weight[i + 1];
        weight[i + 1] = weight[high];
        weight[high] = tempWeight;

        int tempProfit = profit[i + 1];
        profit[i + 1] = profit[high];
        profit[high] = tempProfit;

        int pivotIndex = i + 1;

        quickSort(ratio, weight, profit, low, pivotIndex - 1);
        quickSort(ratio, weight, profit, pivotIndex + 1, high);
    }
}

int main()
{
    int n, capacity;
    int weight[20], profit[20];
    float ratio[20];
    float totalProfit = 0;

    int i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weights:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &weight[i]);
    }

    printf("Enter profits:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &profit[i]);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    /* Calculate profit/weight ratio */
    for(i = 0; i < n; i++)
    {
        ratio[i] = (float)profit[i] / weight[i];
    }

    /* Sort according to ratio using Quick Sort */
    quickSort(ratio, weight, profit, 0, n - 1);

    /* Select items using Greedy Method */
    for(i = 0; i < n; i++)
    {
        if(capacity >= weight[i])
        {
            capacity = capacity - weight[i];

            totalProfit = totalProfit + profit[i];
        }
        else
        {
            totalProfit = totalProfit +
                          ratio[i] * capacity;

            capacity = 0;

            break;
        }
    }

    printf("Maximum Profit = %.2f\n", totalProfit);

    return 0;
}