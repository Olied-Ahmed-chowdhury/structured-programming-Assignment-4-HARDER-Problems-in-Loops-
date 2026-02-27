
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
    int last = arr[n - 1];
    // Shift elements to the left
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    // Store the last element
    arr[0] = last;

    // Print the rotated array
    printf("Output array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
  printf("\n");
    return 0;
}

