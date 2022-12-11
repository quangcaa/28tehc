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
    int u , v ; scanf("%d %d", &u , &v) ;
    for(int i=0 ; i<n ; i++)
    {
        int tmp = a[i][u-1] ;
        a[i][u-1] = a[i][v-1] ;
        a[i][v-1] = tmp ;
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