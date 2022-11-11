#include<stdio.h>
#include<math.h>

int a[1001] ;

int main()
{
    int n , k ;
    scanf("%d%d", &n , &k ) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<=n-k ; i++)
    {
        int sum = 0 ;
        for(int j=0 ; j<k ; j++)
        {
            sum+=a[i+j] ;
        }
        printf("%d ", sum) ;
    }
}