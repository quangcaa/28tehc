#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n , m , p ; scanf("%d %d %d", &n , &m , &p) ;
    int a[n][m] , b[m][p] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            scanf("%d", &a[i][j]) ;
        }
    }
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<p ; j++)
        {
            scanf("%d", &b[i][j]) ;
        }
    }
    long long c[n][p] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<p ; j++)
        {
            c[i][j] = 0 ;
            for(int k=0 ; k<m ; k++)
            {
                c[i][j] += 1ll * a[i][k] * b[k][j] ;
            }
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<p ; j++)
        {
            printf("%lld ", c[i][j]) ;
        }
        printf("\n") ;
    }
    return 0;
}