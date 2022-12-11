#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void sx(int a[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        int min = i ;
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j] < a[min])
            {
                min = j ; 
            }
        }
        int tmp = a[i] ;
        a[i] = a[min] ; 
        a[min] = tmp ;
    }
}

int nt(int n)
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0) return 0 ;
    }
    return n > 1 ; 
}

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
    int cnt = 0 , dem[500] ;
    for(int i=0 ; i<n ; i++)
    {
        if(nt(a[i][i]))
        {
            dem[cnt] = a[i][i] ;
            cnt++ ;
        }
        if(nt(a[i][n-1-i]))
        {
            dem[cnt] = a[i][n-1-i] ;
            cnt++ ;
        }
    }
    sx(dem,cnt) ;
    int sl = 0 ;
    if(cnt != 0) sl = 1 ;
    for(int i=1 ; i<cnt ; i++)
    {
        if(dem[i] != dem[i-1])
        {
            sl++ ;
        }
    }
    printf("%d", sl) ;
}