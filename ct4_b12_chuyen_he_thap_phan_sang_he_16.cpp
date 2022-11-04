#include<stdio.h>
#include<math.h>

void he16(long long n)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        he16(n/16);
        if(n%16 >= 10)
        {
            printf("%c", (char)((n%16)+55)) ;
        }
        else
        {
            printf("%lld", n%16 ) ;
        }
    }
}

int main()
{
    long long n ;
    scanf("%lld", &n) ;
    if(n==0)
    {
        printf("0");
    }
    he16(n) ;
}