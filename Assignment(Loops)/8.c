#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

     for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }


    int even[n], odd[n]; // Arrays to store even and odd elements
    int evenCount = 0, oddCount = 0; // Counters for even and odd elements

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i]; // Store even element
        } else {
            odd[oddCount++] = arr[i]; // Store odd element
        }
    }

    // Output the even array
    printf("Even array:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Output the odd array
    printf("Odd array:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

