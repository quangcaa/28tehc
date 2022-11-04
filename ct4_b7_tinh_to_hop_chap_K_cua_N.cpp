#include<stdio.h>
#include<math.h>

int th(int N , int K)
{
    if(K==0 || K==N)
    {
        return 1 ;
    }
    else
    {
        return th(N-1 , K-1) + th(N-1 , K) ;
    }
}


int main()
{
    int N , K ; scanf("%d %d", &N , &K);
    printf("%d", th(N,K));
}