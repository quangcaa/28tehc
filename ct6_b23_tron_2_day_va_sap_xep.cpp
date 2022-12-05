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
    int n ; scanf("%d", &n ) ;
    int a[n] , b[n] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &b[i]) ;
    }
    mergesort(a,0,n-1) ;
    mergesort(b,0,n-1) ;
    for(int i=0 ; i<n ; i++)
    {
        printf("%d %d ", a[i] , b[n-i-1]) ;
    }
}