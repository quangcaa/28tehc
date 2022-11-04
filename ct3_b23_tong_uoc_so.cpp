#include<stdio.h>
#include<math.h>

long long sum(long long n)
{
    long long tong = 0 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            tong += i ;
            if(n / i != i)
            {
                tong += n / i ;
            }
        }
    }
    return tong ;
}



int main()
{
    long long n ; scanf("%lld", &n);
    printf("%lld", sum(n));
}