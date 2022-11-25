#include<stdio.h>
#include<math.h>

int a[1000001] ;
int prime[10000001] ;

int main()
{
    int n ; scanf("%d", &n) ;
    int max = -1e9 ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
        prime[a[i]] ++ ;
        max = fmax(max , a[i]) ;
    }
    for(int i=0 ; i<=max ; i++)
    {
        if(prime[i])
        {
            printf("%d %d\n", i , prime[i]) ;
        }
    }
    printf("\n") ;
    for(int i=0 ; i<n ; i++)
    {
        if(prime[a[i]])
        {
            printf("%d %d\n", a[i], prime[a[i]]) ;
            prime[a[i]] = 0 ;
        }
    }
}