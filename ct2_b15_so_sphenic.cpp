#include<stdio.h>
#include<math.h>

//dk so nguyen to
long long songuyento(long long a)
{
    if(a<2)
    {
        return 0;
    }
    for(int i=2 ; i<=sqrt(a) ; i++)
    {
        if(a%i==0)
        {
            return 0 ;
        }
    }
    return 1;
}

int sosphenic(long long x)
{
    for(int j=2 ; j<=x ; j++)
    {
        if(songuyento(j) ==1)
        {
            x/=j;
        }
    }
    if(x==1)
    {
        return 1;
    }else{
        return 0;
    }
}


int main()
{
    long long n ;
    scanf("%lld", &n);
    if(sosphenic(n)==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}