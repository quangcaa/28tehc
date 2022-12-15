#include<stdio.h>
#include<math.h>

#define ll long long 

long long ucln(ll a , ll b)
{
    if(b==0)
        return a;
    else
        return ucln(b , a%b);
}

long long bcnn(ll a , ll b)
{
    return a/ucln(a,b) * b ;
}

int main()
{
    ll a , b ; scanf("%lld %lld", &a , &b);
    printf("%lld %lld", ucln(a,b) , bcnn(a,b));
}