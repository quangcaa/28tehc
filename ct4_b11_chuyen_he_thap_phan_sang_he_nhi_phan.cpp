#include<stdio.h>
#include<math.h>

void chhe(long long n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        chhe(n/2) ;
        printf("%lld", n%2) ;
    }
}

int main()
{
    long long n ; 
    scanf("%lld", &n) ;
    if(n==0)
        printf("0");
    chhe(n) ;
}