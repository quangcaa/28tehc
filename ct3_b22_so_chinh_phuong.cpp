#include<stdio.h>
#include<math.h>

int main()
{
    long long a , b ; scanf("%lld %lld", &a , &b);
    int sum = sqrt(b) - ceil(sqrt(a)) + 1 ;
    printf("%d",sum);
}