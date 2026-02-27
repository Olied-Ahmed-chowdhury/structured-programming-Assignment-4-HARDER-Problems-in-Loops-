#include<stdio.h>

void leftRotate(int arr[], int n, int k) {
    // To handle if k is greater than n
    k = k % n;

    // Temporary array to hold the rotated elements
    int temp[k];

    // Store the first k elements in the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    // Move the temporary elements to the end of the array
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 3, 1, 10, 7}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int k = 3; // Number of positions to rotate

    // Perform left rotation
    leftRotate(arr, n, k);

    // Print the rotated array
    printf("Output array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

