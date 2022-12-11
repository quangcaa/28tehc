#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a , const void *b)
{
    int *x = (int *)a ;
    int *y = (int *)b ;
    return *x - *y ;
}

int first(int a[] , int l , int r , int x)
{
    int res = -1 ;
    while(l<=r)
    {
        int m = (l+r)/2 ;
        if(a[m]==x)
        {
            res = m ;
            r = m-1 ;
        }
        else if(a[m]<x)
        {
            l = m+1 ;
        }
        else
        {
            r = m-1 ;
        }
    }
    return res ;
}

int last(int a[] , int l , int r , int x)
{
    int res = -1 ;
    while(l<=r)
    {
        int m = (l+r)/2 ;
        if(a[m]==x)
        {
            res = m ;
            l = m+1 ;
        }
        else if(a[m]<x)
        {
            l = m+1 ;
        }
        else
        {
            r = m-1 ;
        }
    }
    return res ;
}

int main()
{
    int n , k ; scanf("%d%d", &n , &k) ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    qsort(a,n,sizeof(int),comp) ;
    long long count = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        int l = i+1 , r = n-1 ;
        int dau = first(a,l,r,k - a[i]) ;
        int cuoi = last(a,l,r,k-a[i]) ;
        if(dau != -1)
        {
            count += cuoi - dau + 1 ;
        }
    }
    printf("%lld", count ) ;
}