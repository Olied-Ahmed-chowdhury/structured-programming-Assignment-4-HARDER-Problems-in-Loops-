
#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 3, 1, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[n]; // To track visited elements
    for (int i = 0; i < n; i++) {
        visited[i] = 0; // Initialize all elements as not visited
    }

    printf("Output (Element : Frequency format):\n");

    // Loop through the array
    for (int i = 0; i < n; i++) {
        if (visited[i]) {
            continue; // Skip if already visited
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d : %d\n", arr[i], count);
    }

    return 0;
}
