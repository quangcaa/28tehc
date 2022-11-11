#include<stdio.h>
#include<math.h>

int a[1001] ;

int main()
{
    int n , x ;
    scanf("%d %d", &n , &x) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    int k = 0 , tmp = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] == x)
        {
            tmp = i ;
            k++ ;
            break ;
        }
    }
    if(k==0)
    {
        printf("NOT FOUND") ;
    }
    else
    {
        for(int i=tmp ; i<n-1 ; i++)
        {
            a[i] = a[i+1] ;
        }
        --n ;
        for(int i=0 ; i<n ; i++)
        {
            printf("%d ", a[i]) ;
        }
    }
    return 0 ;
}