#include<stdio.h>
#include<math.h>

int a[1001] ;

int main()
{
    int n , k , x ;
    scanf("%d%d%d", &n , &x , &k ) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    --k ;
    for(int i=n ; i>k ; i--)
    {
        a[i] = a[i-1] ;
    }
    a[k] = x ;
    ++n ;
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ", a[i]) ;
    }
}