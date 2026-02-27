
#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);

    int arr[n], arr2[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n ; i++)
    {
        arr2[i] = arr[i] ;
    }

    for(int i = 0, j = n-1 ; i <= j; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;
    }

    int ispalindrom = 1;
    for(int i =0 ; i < n ; i++)
    {

        if(arr[i] != arr2[i])
        {
            ispalindrom = 0 ;
            break;
        }
    }
    if(ispalindrom == 1 )
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("NOT Palindrome\n");
    }


    return 0;
}
