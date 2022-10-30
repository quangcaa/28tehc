#include<stdio.h>
#include<math.h>

int songuyento(int a)
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

int ucln(int x)
{
    int z ;
    for(int j=x-1 ; j>=1 ; j--)
    {
        if(songuyento(j)==1)
        {
            z=j;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++ )
    {
        long long x;
        scanf("%lld", &x);
        printf("%d\n", ucln(x));
    }
}