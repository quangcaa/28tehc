//co ve chua dung lam :)) 


#include<stdio.h>
#include<math.h>

int ucln(long long x)
{
    int res ;
    for(int i=2 ; i<=sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            res = i;
            while(x%i==0)
            {
                x/=i;
            }
        }
    }
    if(x > 1)
    {
        res=x;
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++)
    {
        long long x;
        scanf("%lld", &x);
        printf("%d\n", ucln(x));
    }
    return 0;
}