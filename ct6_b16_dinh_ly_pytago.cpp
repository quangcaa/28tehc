#include<stdio.h>
#include<math.h>

long long a[10000] ;

void merge(long long a[], int l , int m , int r)
{
    int n1 = m-l+1 , n2 = r-m ;
    long long x[n1] , y[n2] ;
    for(int i=0 ; i<n1 ; i++)
    {
        x[i] = a[l+i] ;
    }
    for(int i=0 ; i<n2 ; i++)
    {
        y[i] = a[m+1+i] ;
    }
    int cnt = l ; 
    int i=0 , j=0 ;
    while(i<n1 && j<n2)
    {
        if(x[i] <= y[j])
        {
            a[cnt++] = x[i++] ;
        }else
        {
            a[cnt++] = y[j++] ;
        }
    }
    while(i<n1) a[cnt++] = x[i++] ;
    while(j<n2) a[cnt++] = y[j++] ;
}

void mergeSort(long long a[], int l , int r) 
{
    if(l<r)
    {
        long long m = (l+r)/2 ;
        mergeSort(a , l, m) ;
        mergeSort(a , m+1 , r) ;
        merge(a , l , m , r) ;
    }
}

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%lld", &a[i]) ;
        a[i] *= a[i] ;
    }
    mergeSort(a , 0 , n-1) ;
    for(int i=n-1 ; i>=2 ; i--)
    {
        int l=0 , r=i-1 ;
        while(l<r)
        {
            long long sum = a[l] + a[r] ;
            if(sum == a[i])
            {
                printf("YES") ;
                return 0 ;
            }
            else if(sum < a[i])
            {
                l++ ;
            }
            else
            {
                r-- ;
            }
        }
    }
    printf("NO") ;
    return 0 ;
}