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
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                printf("%d ", a[i][j]) ;
            }
        }
    }
    return 0 ;
}