#include<stdio.h>
#include<math.h>

int check(long long n)
{
    long long x = sqrt(n);
    if(x*x == n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    long long n ; scanf("%lld", &n);
    if(check(n))
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}