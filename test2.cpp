#include<stdio.h>


long long findfibo(int n)
{
    if(n==0 || n==1)
    {
        return n ;
    }
    long long fn1 = 1 , fn2 = 0 ;
    long long fn ;
    for(int i=2 ; i<=n ; i++)
    {
        fn = fn1 + fn2 ;
        fn2 = fn1 ;
        fn1 = fn ;
    }
    return fn ;
}

int main()
{
    printf("%lld", findfibo(92));
}