#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n , m ; scanf("%d%d", &n , &m) ;
    int a[n][m] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
           scanf("%d", &a[i][j]) ; 
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        long long sum = 0 ; 
        for(int j=0 ; j<m ; j++)
        {
            sum += a[i][j] ;
        }
        printf("%lld ", sum ) ;
    }
    printf("\n") ;
    for(int i=0 ; i<m ; i++)
    {
        long long sum = 0 ;
        for(int j=0 ; j<n ; j++)
        {
            sum += a[j][i] ;
        }
        printf("%lld ", sum) ;
    }
    return 0 ; 
}