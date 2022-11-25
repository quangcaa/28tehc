#include<stdio.h>
#include<math.h>

int prime[1000001] ;

void sang()
{
    for(int i=0 ; i<1000000 ; i++)
    {
        prime[i] = 1 ;
    }
    prime[0] = prime[1] = 0 ;
    for(int i=2 ; i<=sqrt(1000000) ; i++)
    {
        if(prime[i])
        {
            for(int j=i*i ; j<=1000000 ; j+=i)
            {
                prime[j] = 0 ;
            } 
        }
    }
}

int main()
{
    long long n ; scanf("%lld", &n) ;
    sang() ;
    int dem = 0 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(prime[i])
        {
            dem++ ;
        }
    }
    printf("%d", dem) ;
}