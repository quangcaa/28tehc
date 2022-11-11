#include<stdio.h>
#include<math.h>

int a[1001] ;
int F[1001] ;

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(i==0) F[0] = a[0] ;
        else F[i] = F[i-1] + a[i] ;
        printf("%d ", F[i]) ;
    }
    return 0 ;
}