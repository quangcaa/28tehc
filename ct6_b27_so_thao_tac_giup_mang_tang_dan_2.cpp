#include<stdio.h>
#include<math.h>

int a[100001] ;

int main()
{
    int n , d ; scanf("%d %d", &n , &d) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    long long cnt = 0 ;
    for(int i=1 ; i<n ; i++)
    {
        if(a[i]<=a[i-1])
        {
            int kc = a[i-1] - a[i] + 1 ;
            int q ;
            if(kc%d==0)
            {
                q = kc / d ;
            }
            else
            {
                q = kc/d + 1 ;
            }
            cnt += q ;
            a[i] += q*d ;
        }
    }
    printf("%lld", cnt) ;
}