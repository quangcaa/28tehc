#include<stdio.h>
#include<math.h>

int A[1000001] ;

void thuan(int n , int A[])
{
    if(n==0)
        return ;
    else
        return thuan(n-1, A);
        printf("%d ", A[n]);
}

int main()
{
    int n ; 
    scanf("%d", &n) ;
    for(int i=1 ; i<=n ; i++)
    {
        scanf("%d", A[i]) ;
    }
    thuan(n , A) ;
}