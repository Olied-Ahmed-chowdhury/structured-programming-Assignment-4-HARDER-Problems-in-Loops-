
#include<stdio.h>
int main()
{
    int n ;
    printf("enter element number of array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int index ;
    scanf("%d",&index);
     n--;
    for(int i = index ; i<n ; i++)
    {
        arr[i] = arr[i+1];
    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

