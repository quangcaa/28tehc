#include<stdio.h>
#include<math.h>

int hop[100000001] , giao[10000001] ;

int main()
{
    int n , m ; scanf("%d %d", &n , &m ) ;
    int a[n] , b[m] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<m ; i++)
    {
        scanf("%d", &b[i]) ;
    }
    int g = 0 , h = 0 ;
    int i = 0 , j = 0 ;
    while(i<n && j<m) 
    {
        if(a[i] == b[j])
        {
            hop[h] = a[i] ; giao[g] = a[i] ;
            h++ , g++ , i++ , j++ ;
        }
        else if(a[i] < b[j])
        {
            hop[h++] = a[i++] ;
        }
        else 
        {
            hop[h++] = b[j++] ;
        }
    }
    while(i<n)
    {
        hop[h++] = a[i++] ;
    }
    while(j<m)
    {
        hop[h++] = b[j++] ;
    }
    for(int i=0 ; i<h ; i++)
    {
        printf("%d ", hop[i]) ;
    }
    printf("\n") ;
    for(int i=0 ; i<g ; i++)
    {
        printf("%d ", giao[i]) ;
    }
}