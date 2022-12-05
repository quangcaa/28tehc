#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a , const void *b)
{
    int *x = (int *)a ;
    int *y = (int *)b ;
    return *y - *x ;
}

int main()
{
    int n ; scanf("%d", &n) ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    long long tong = 0 ;
    qsort(a,n,sizeof(int),comp) ;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] > i)
        {
            tong += (a[i] - i) ;
        }
        else
        {
            break ;
        }
    }
    printf("%lld", tong) ;
}   