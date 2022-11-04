#include<stdio.h>
#include<math.h>

#define ll long long

int tongcs(ll n)
{
    if(n==0)
    {
        return 0 ;
    }
    return n%10 + tongcs(n/10) ;
}

int main()
{
    ll n ;
    scanf("%lld", &n) ;
    printf("%d", tongcs(n)) ;
}