
#include <stdio.h>
int main()
{
    int len ;
    scanf("%d",&len);

    int arr[len];
    for(int i =0 ; i< len ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int index ;
    scanf("%d",&index);

    int empliment ;
    scanf("%d",&empliment);

    int x[empliment];
    for(int i = 0 ; i < empliment ; i++)
    {
        scanf("%d",&x[i]);
    }

    int new_len = len + empliment ;

    for(int i = new_len-1; i >= index ; i--)
    {
        arr[i] = arr[i - empliment];
    }
    for(int i = index ; i < index+empliment ; i++)
    {
        arr[i] = x[i - index];

    }
    for(int i = 0 ; i < new_len ; i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;

}
