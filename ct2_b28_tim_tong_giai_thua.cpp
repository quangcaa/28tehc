#include<stdio.h>
#include<math.h>

int main()
{
    int n ;
    scanf("%d", &n);
    long long sum=0;
    // for(int i=1 ; i<=n ; i++)
    // {
    //     long long gt=1  ;
    //     for(int j=1 ; j<=i ; j++)
    //     {
    //         gt*=j;
    //     }
    //     sum += gt;
    // }

    //or 

    long long gt =1 ;
    for(int i=1 ; i<=n ; i++)
    {
        gt*=i;
        sum += gt ;
    }
    
    printf("%lld", sum);
    return 0;
}