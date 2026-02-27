
#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int i, j, count;

    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        count = 0;

        // Check if the current element is a duplicate
        for ( j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                count = 1;
                break; // Stop checking once duplicate is found
            }
        }

        // If no duplicate is found, print the element
        if (count == 0)
        {
            printf("%d\n", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

