#include<stdio.h>
#include<math.h>

int sosphenic(long long a)
{
    int cnt = 0 ;
    for(int i=2 ; i<= sqrt(a) ; i++)
    {
        if(a % i ==0 )
        {
            int mu = 0 ;
            while(a % i == 0 )
            {
                mu++;
                a /= i ;
            }
            if(mu>=2)
                return 0;
            cnt++;
        }
    }
    if(a != 1)
    {
        cnt++;
    }
    if(cnt==3)
        return 1;
    else
        return 0;
}

int main()
{
    long long n ;
    scanf("%lld", &n);
    if(sosphenic(n))
    {
        printf("1");
    }
    else{
        printf("0");
    }
}