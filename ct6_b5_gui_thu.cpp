#include<stdio.h>
#include<math.h>

int a[1000001] ;

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        int max , min ;
        if(i==0)
        {
            printf("%d %d\n", a[1]-a[0] , a[n-1]-a[0]) ;
        }
        else if(i==n-1)
        {
            printf("%d %d", a[n-1]-a[n-2] , a[n-1]-a[0]) ;
        }
        else
        {
            min = fmin(a[i] - a[i-1] , a[i+1]-a[i]) ;
            max = fmax(a[i] - a[0] , a[n-1]-a[i]) ;
            printf("%d %d\n", min , max) ;
        }
    }
}