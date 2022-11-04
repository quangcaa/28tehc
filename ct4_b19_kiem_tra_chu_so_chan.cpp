#include<stdio.h>
#include<math.h>

int check(long long n)
{
    if(n<10)
        if(n%2==0)
            return 1 ;
        else
            return 0;
    else
        if(n%10 %2 == 1)
            return 0 ;
        else    
            return check(n/10) ;
}

int main()
{
    long long n ;
    scanf("%lld", &n) ;
    if(check(n))
        printf("YES");
    else
        printf("NO");
}