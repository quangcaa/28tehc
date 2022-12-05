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
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &b[i]) ;
    }
    int index = 0 ;
    int i=0 , j=0 ; 
    while(i<n && j<m)
    {
        if(b[j]<a[i])
        {
            index++ ;
            i++ ; 
            j++ ;
        }
        else if(b[j]>=a[i])
        {
            i++ ;
        }
    }
    printf("%d", index) ;
}