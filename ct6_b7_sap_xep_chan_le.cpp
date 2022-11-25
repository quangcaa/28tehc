#include <stdio.h>
#include <math.h>

int chan[1000001] ;
int le[1000001] ;


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

void mergeSort(int a[], int l , int r) 
{
    if(l<r)
    {
        int m = (l+r)/2 ;
        mergeSort(a , l, m) ;
        mergeSort(a , m+1 , r) ;
        merge(a , l , m , r) ;
    }
}

int main()
{
    int n ; scanf("%d", &n) ;
    int cntc = 0 , cntl = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        int x; scanf("%d", &x) ;
        if(x%2==0){ 
            chan[cntc] = x ; 
            cntc ++ ;
        }
        else{
            le[cntl] = x ; 
            cntl ++ ;
        }
    }
    mergeSort(chan , 0 , cntc-1) ; 
    mergeSort(le , 0 , cntl-1) ;
    for(int i=cntl-1 ; i>=0 ; i--)
    {
        printf("%d ", le[i]) ;
    }
    for(int i=0 ; i<cntl ; i++)
    {
        printf("%d ", chan[i]) ;
    }
}