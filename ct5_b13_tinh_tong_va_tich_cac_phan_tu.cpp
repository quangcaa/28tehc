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
    long long sum = 0 , tich = 1 ;
    for(int i=0 ; i<n ; i++)
    {
        long long x = pow(10,9)+7 ;
        sum += a[i] ;
        sum %= x ;
        tich *= a[i] ;
        tich %= x ;
    }
    printf("%lld\n%lld", sum , tich) ;
}