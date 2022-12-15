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
    long long res[n][m] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            res[i][j] = a[i][j] ;
            if(i==0 && j==0)
            {
                res[i][j] = res[i][j] ;
            }
            else if(i==0)
            {
                res[i][j] += res[i][j-1] ;
            }
            else if(j==0)
            {
                res[i][j] += res[i-1][j] ;
            }
            else
            {
                res[i][j] += fmax(res[i-1][j] , res[i][j-1]) ;
            }
        }
    }
    printf("%lld", res[n-1][m-1]) ;
}