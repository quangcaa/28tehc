#include<stdio.h>
#include<math.h>

int a[1000001] ;

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
    int cnt = l ;
    int i = 0 , j = 0 ;
    while(i<n1 && j<n2)
    {
        if(x[i] <= y[j])
        {
            a[cnt++] = x[i++] ;
        }
        else
        {
            a[cnt++] = y[j++] ;
        }
    }
    while(i<n1)
    {
        a[cnt++] = x[i++] ;
    }
    while(j<n2)
    {
        a[cnt++] = y[j++] ;
    }
}

void mS(int a[], int l , int r)
{
    if(l<r)
    {
        int m = (l+r)/2 ;
        mS(a , l , m ) ;
        mS(a , m+1 , r) ;
        merge(a , l , m , r) ;
    }
}

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }
    mS(a, 0 , n-1) ;
    int cnt , min = 1e9 ;
    for(int i=0 ; i<n-1 ; i++)
    {
        if(a[i+1]-a[i] < min)
        {
            min = a[i+1] - a[i] ;
            cnt = 1 ;
        }
        else if(a[i+1]-a[i] == min )
        {
            cnt++ ;
        }
    }
    printf("%d %d", min , cnt) ;
    return 0 ;
}