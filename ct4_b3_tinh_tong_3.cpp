#include<stdio.h>
#include<math.h>

long long th(int n)
{
    if(n==0)
        return 0;
    else
        return pow(n,3) + th(n-1);
}

int main()
{
    int n ; scanf("%d", &n) ;
    printf("%lld", th(n));
}