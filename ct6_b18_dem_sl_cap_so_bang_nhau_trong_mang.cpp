#include<stdio.h>
#include<math.h>

int prime[1000001] ;

int main()
{
    int n ; 
    scanf("%d", &n) ;
    int max = -1e9 ;
    for(int i=0 ; i<n ; i++)
    {
        int x ; scanf("%d", &x) ;
        prime[x]++ ;
        max = fmax(max,x) ;
    }
    long long cnt = 0 ;   
    for(int i=0 ; i<=max ; i++)
    {
        if(prime[i] != 0)
        {
            cnt += 1ll * prime[i] * (prime[i]-1) / 2 ;
        }   
    }
    printf("%lld", cnt ) ;
}