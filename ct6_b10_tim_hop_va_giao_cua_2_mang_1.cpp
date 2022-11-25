#include<stdio.h>
#include<math.h>

int giao[10000001] ;
int hop[10000001] ;

int main()
{
    int n , m ; scanf("%d %d", &n , &m) ;
    int a[n] , b[m] ;
    int max = -1e9 ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
        hop[a[i]] = 1 ;
        giao[a[i]] = 1 ;
        max = fmax(max,a[i]) ;
    }
    for(int i=0 ; i<m ; i++)
    {
        scanf("%d", &b[i]) ;
        hop[b[i]] = 1 ;
        if(giao[b[i]] == 1)
        {
            giao[b[i]] = 2 ;
        }
        max = fmax(max,b[i]) ;
    }
    for(int i=0 ; i<=max ; i++)
    {
        if(giao[i] == 2)
        {
            printf("%d ", i) ;
        }
    }
    printf("\n") ;
    for(int i=0 ; i<=max ; i++)
    {
        if(hop[i])
        {
            printf("%d ", i) ;
        }
    }
}