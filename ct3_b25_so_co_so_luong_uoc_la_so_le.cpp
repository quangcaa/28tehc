#include<stdio.h>
#include<math.h>

int main()
{
    long long n ; scanf("%lld", &n);
    int x = sqrt(n);
    if(1ll*x*x == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}