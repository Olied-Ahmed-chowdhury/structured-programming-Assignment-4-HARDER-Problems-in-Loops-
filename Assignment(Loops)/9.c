#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

   printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int first = arr[0]; // Store the first element

    // Shift elements to the left
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Move the first element to the end
    arr[n - 1] = first;

    // Print the rotated array
    printf("Output array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

