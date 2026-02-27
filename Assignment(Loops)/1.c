#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter elements in the first array: ");
    scanf("%d", &a);
    int arr1[a];
    printf("Enter %d elements in first array:\n", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);

        printf("Enter elements in the second array: ");

        scanf("%d", &b);
        int arr2[b];
        printf("Enter %d  elements in second array:\n",b);
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &arr2[i]);
        }

        int mergedArr[a+b];
        int i = 0, j = 0, k = 0;
        for (; i < a && j < b; k++)
        {
            if (arr1[i] < arr2[j])
            {
                mergedArr[k] = arr1[i];
                i++;
            }
            else
            {
                mergedArr[k] = arr2[j];
                j++;
            }
        }
        for (; i < a; i++, k++)
        {
            mergedArr[k] = arr1[i];
        }
        for (; j < b; j++, k++)
        {
            mergedArr[k] = arr2[j];
        }
        printf("Output array:\n");
        for (int m = 0; m < a + b; m++)
        {
            printf("%d\n", mergedArr[m]);
        }
    }
        return 0;
        }
