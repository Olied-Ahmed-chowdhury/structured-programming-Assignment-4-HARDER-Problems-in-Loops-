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
    n++;
    int index , value ;
    scanf("%d%d",&index ,&value);

    for(int i = n -1 ; i >= index ; i--)
    {
        arr[i+1] = arr[i];
    }

     arr[index] = value ;
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

