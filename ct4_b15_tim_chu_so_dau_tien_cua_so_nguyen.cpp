#include<stdio.h>
#include<math.h>

#define ll long long 

void csdau(ll n)
{
    if(n<10)
    {
        printf("%lld", n);
        return ;
    }
    csdau(n/10);
}

int main()
{
    ll n ; 
    scanf("%lld", &n) ;
    csdau(n) ;
}