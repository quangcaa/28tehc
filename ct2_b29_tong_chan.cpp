#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long sum=0 ;
    for(int i=1; i<=n ; i++)
    {
        int k;
        scanf("%d", &k);
        if(k%2==0)
        {
            sum+=k;
        }
    }
    printf("%lld", sum);
    return 0;
}