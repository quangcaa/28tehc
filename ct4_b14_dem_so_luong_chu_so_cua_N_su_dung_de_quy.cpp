#include<stdio.h>
#include<math.h>

#define ll long long 

int dem(ll n)
{
    if(n==0)
    {
        return 0;
    }
    return dem(n/10) + 1 ;
}

int main()
{
    long long n ;
    scanf("%lld", &n) ;
    if(n==0) printf("1");
    else 
    printf("%d",dem(n)) ;
}