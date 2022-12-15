#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a , const void *b)
{
    int *x = (int *)a ;
    int *y = (int *)b ;
    return *x - *y ;
}

int main()
{
    int n ; scanf("%d" , &n) ;
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
        qsort(a[i],n,sizeof(int),comp) ;
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