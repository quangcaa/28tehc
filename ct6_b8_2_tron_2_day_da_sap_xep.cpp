#include<stdio.h>
#include<math.h>

int main()
{
    int n , m ; scanf("%d %d", &n , &m) ;
    int x[n] , y[m] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &x[i]) ;
    }
    for(int i=0 ; i<m ; i++)
    {
        scanf("%d", &y[i]) ;
    }
    int i=0 , j = 0 ;
    while(i<n && j<m)
    {
        if(x[i] <= y[j])
        {
            printf("%d ", x[i]) ;
            i++ ;
        }
        else
        {
            printf("%d ", y[j]) ;
            j++ ;
        }
    }
    while(i<n) 
    {printf("%d ", x[i]) ; i++ ; }
    while(j<m)
    {printf("%d ", y[j]) ; j++ ; }
}