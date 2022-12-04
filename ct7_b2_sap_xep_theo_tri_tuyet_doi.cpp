#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a,const void *b)
{
    int *x = (int*)a ;
    int *y = (int*)b ;
    return abs(*x) - abs(*y) ;
}

int main()
{
    int n ; scanf("%d", &n) ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    qsort(a , n , sizeof(int) , comp) ;
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ", a[i] ) ;
    }
    printf("\n") ;
}