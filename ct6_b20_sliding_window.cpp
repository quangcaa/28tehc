#include<stdio.h>
#include<math.h>

int a[10000001] ;

int main()
{
    int n , k ; scanf("%d %d", &n , &k) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    long long sum = 0 ;
    for(int i=0 ; i<k ; i++)
    {
        sum += a[i] ;
    }
    long long pos = 0 , summx = sum ;
    for(int i=1 ; i<=n-k ; i++)
    {
        sum = sum - a[i-1] + a[i+k-1] ;
        if(sum > summx)
        {
            summx = sum ;
            pos = i ;
        }
    }
    printf("%lld\n", summx) ;
    for(int i=0 ; i<k ; i++)
    {
        printf("%d ", a[pos+i]) ;
    }
}