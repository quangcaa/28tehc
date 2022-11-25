#include<stdio.h>
#include<math.h>

int check(int x)
{
    if(x==1) return 1 ;
    if(x%2==0) return 2 ;
    for(int i=3 ; i<=sqrt(x) ; i+=2)
    {
        if(x%i==0) return i ;
    }
    return x ;
}

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d\n" , check(i)) ; 
    }
}