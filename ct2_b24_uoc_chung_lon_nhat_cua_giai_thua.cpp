#include<stdio.h>
#include<math.h>

int main()
{
    long long a , b ; 
    scanf("%lld %lld", &a, &b);
    long long min = fmin(a,b);
    long long ucln = 1;
    for(int i=1 ; i<=min ; i++)
    {
        ucln*=i;
    }
    printf("%lld", ucln);
    return 0;
}