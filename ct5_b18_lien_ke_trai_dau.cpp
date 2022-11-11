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
    for(int i=0 ; i<n ; i++)
    {
        if(i==0)
        {
            if(1ll*a[0]*a[1]<0) printf("%d ", a[0]) ;
        }
        else if(i==n-1)
        {
            if(1ll*a[n-1]*a[n-2]<0) printf("%d ", a[n-1]) ;
        }
        else
        {
            if(1ll*a[i]*a[i+1]<0 || 1ll*a[i]*a[i-1]<0)
            {
                printf("%d ", a[i]) ;
            }
        }
    }
}