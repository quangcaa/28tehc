#include<stdio.h>
#include<math.h>

int main()
{
    long long n ; scanf("%lld", &n) ;
    int gia[10] = {1000,500,200,100,50,20,10,5,2,1} ;
    long long cnt = 0 ;
    for(int i=0 ; i<10 ; i++)
    {
        cnt += n/gia[i] ;
        n %= gia[i] ;
    }
    printf("%lld", cnt) ;
    return 0 ;
}