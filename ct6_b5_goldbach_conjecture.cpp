#include<stdio.h>
#include<math.h>

int prime[1000001] ;

void sang()
{
    for(int i=0 ; i<=1000000 ; i++)
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
    sang() ;
    int n ; scanf("%d", &n) ;
    while(n--)
    {
        int x ; scanf("%d", &x) ;
        for(int i=2 ; i<=x/2 ; i++)
        {
            if(prime[i] && prime[x-i])
            {
                printf("%d %d\n", i , x-i) ;
            }
        }
    }
    return 0 ;
}