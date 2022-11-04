#include<stdio.h>
#include<math.h>

void inthuan(long long n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        inthuan(n/10) ;
        printf("%lld ", n%10) ;
    }
}

void innghich(long long n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        printf("%lld ", n%10) ;
        innghich(n/10) ;
    }
}

int main()
{
    long long n ;
    scanf("%lld", &n) ;
    inthuan(n) ;
    printf("\n") ;
    innghich(n) ;
}