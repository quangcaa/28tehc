#include<stdio.h>
#include<math.h>
#include<stdlib.h>

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
    int cnt = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(nt(a[i][i]))
        {
            cnt++ ; 
        }
        if(nt(a[i][n-1-i]))
        {
            cnt++ ;
        }
    }
    if(n%2==1)
    {
        if(nt(a[n/2][n/2]))
        {
            cnt-- ;
        }
    }
    printf("%d", cnt) ;
}