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
    int u , v ; scanf("%d%d", &u , &v) ;
    for(int i=0 ; i<n ; i++)
    {
        int tmp = a[u-1][i] ;
        a[u-1][i] = a[v-1][i] ;
        a[v-1][i] = tmp ;
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ", a[i][j]) ;
        }
        printf("\n") ;
    }
}