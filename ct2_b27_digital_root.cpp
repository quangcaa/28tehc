#include<stdio.h>
#include<math.h>

int main()
{
    long long n ;
    scanf("%lld", &n);
    while(n>=10)
    {
        int summl=0;
        while(n)
        {
            summl += n%10;
            n = n/10 ;
        }
        n=summl;
    }
    printf("%lld",n);
    return 0;
}