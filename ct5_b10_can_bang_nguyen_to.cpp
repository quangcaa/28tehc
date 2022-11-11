#include<stdio.h>
#include<math.h>

int a[10001] ;

int nt(int n)
{
    for(int i=2; i<=sqrt(n) ; i++)
    {
       if(n%i==0)
        {
            return 0 ;
        }
    }
    return n > 1 ;
}

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
        int sumt = 0 ;
        int sump = 0 ;
        for(int j=0 ; j<i ; j++)
        {
            sumt += a[j] ;
        }
        for(int j=i+1 ; j<n ; j++)
        {
            sump += a[j] ;
        }
        if(nt(sumt) && nt(sump))
        {
            printf("%d ", i) ;
        }
    }
    return 0 ;
}