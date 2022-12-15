#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n ; scanf("%d", &n) ;
    int a[n][n] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            scanf("%d", &a[i][j]) ;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i%2==0)
            {
                printf("%d ", a[i][j]) ;
            }
            else
            {
                printf("%d ", a[i][n-1-j]) ;
            }
        }
        printf("\n") ;
    }
    return 0 ; 
}