#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n , m ; scanf("%d %d", &n , &m) ;
    int a[n] , b[m] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<m ; i++)
    {
        scanf("%d", &b[i]) ;
    }
    int i = 0 , j = 0 ;
    while(i<n && j<m)
    {
        if(a[i] <= b[j])
        {
            printf("b%d ", i+1) ;
            i++ ;
        }
        else
        {
            printf("c%d ", j+1) ;
            j++ ;
        }
    }
    while(i<n)
    {
        printf("b%d ", i+1) ;
        i++ ;
    }
    while(j<m)
    {
        printf("c%d ", j+1) ;
        j++ ;
    }
}