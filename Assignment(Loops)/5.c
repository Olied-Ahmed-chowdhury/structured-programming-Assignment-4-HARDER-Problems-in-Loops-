#include<stdio.h>
int main()
{
    int n ;
    printf("enter array elements number: ");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int range1 ,range2 ;
    scanf("%d %d",&range1 ,&range2);

    int new_n = n -(range1+range2 - 1);
    for(int i = range1 ; i  < n ; i++)
    {
         arr[i] = arr[range2+i];
    }
    for(int i = 0 ; i < new_n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

