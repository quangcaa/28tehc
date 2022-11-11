#include<stdio.h>
#include<math.h>

int a[1000001] ;

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    int max = 0 , min = 1e9 ;
    int vtmin = 0 , vtmax = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] <= min)
        {
            min = a[i] ;
            vtmin = i ;
        }
        if(a[i] > max)
        {
            max = a[i] ;
            vtmax = i  ;
        }
    }
    printf("%d %d", vtmin , vtmax) ;
    return 0 ;
}