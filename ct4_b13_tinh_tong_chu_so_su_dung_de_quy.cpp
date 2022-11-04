#include<stdio.h>
#include<math.h>

#define ll long long

int tongcs(ll n)
{
    if(n<10)
    {
        return n ;
    }
    return n%10 + tongcs(n/10) ;
}

int main()
{
    ll n ;
    scanf("%lld", &n) ;
    printf("%d", tongcs(n)) ;
}