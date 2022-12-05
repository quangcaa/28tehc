#include<stdio.h>
#include<math.h>

void merge(int a[], int l , int m , int r)
{
    int n1 = m-l+1 , n2 = r-m ;
    int x[n1] , y[n2] ;
    for(int i=0 ; i<n1 ; i++)
    {
        x[i] = a[l+i] ;
    }
    for(int i=0 ; i<n2 ; i++)
    {
        y[i] = a[m+1+i] ;
    }
    int i = 0 , j = 0 ;
    int index = l ;
    while(i<n1 && j<n2)
    {
        if(x[i] <= y[j])
        {
            a[index++] = x[i++] ;
        }
        else
        {
            a[index++] = y[j++] ;
        }
    }
    while(i<n1)
    {
        a[index++] = x[i++] ;
    }
    while(j<n2)
    {
        a[index++] = y[j++] ;
    }
}

void mergesort(int a[] , int l , int r)
{
    if(l<r)
    {
        int m = (l+r)/2 ;
        mergesort(a, l , m) ;
        mergesort(a, m+1 , r) ;
        merge(a , l , m , r) ;
    }
}

int main()
{
    int n , k ; scanf("%d %d", &n , &k) ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    mergesort(a,0,n-1) ;
    long long sum1 = 0 , sum2 = 0 ;
    k = fmin(k,n-k) ;
    for(int i=0 ; i<n ; i++)
    {
        if(i<k)
        {
            sum1 += a[i] ;
        }
        else
        {
            sum2 += a[i] ;
        }
    }
    printf("%lld", sum2-sum1) ;
    return 0 ;
}