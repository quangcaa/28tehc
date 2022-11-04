#include<stdio.h>
#include<math.h>

long long sum(int x)
{
    if(x==0)
        return 0 ;
    else
        return x*x + sum(x-1);
}

int main()
{
    int n ; scanf("%d", &n);
    printf("%lld", sum(n));
}