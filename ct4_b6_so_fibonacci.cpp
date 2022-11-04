#include<stdio.h>
#include<math.h>

long long fb(int n)
{
    if(n==1 || n==2)
    {
        return n-1 ;
    }
    else
    {
        return fb(n-1) + fb(n-2) ;
    }
}


int main()
{
    int n ; scanf("%d", &n) ;
    printf("%lld", fb(n));
}