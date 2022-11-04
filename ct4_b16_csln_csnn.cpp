#include<stdio.h>
#include<math.h>

#define ll long long 

int mindigit(ll n)
{
    if(n<10)
    {
        return n ;
    }
    else
    {
        return fmin(n%10 , mindigit(n/10)) ;
    }
}

int maxdigit(ll n)
{
    if(n<10)
    {
        return n ;
    }
    else
    {
        return fmax(n%10 , maxdigit(n/10)) ;
    }
}

int main()
{
    long long n ; 
    scanf("%lld", &n) ;
    printf("%d %d", maxdigit(n) , mindigit(n)) ;
}