#include<stdio.h>
#include<math.h>

int a[100001] ;

int nt(int n )
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0) return 0 ;
    }
    return n > 1 ;
}

int main()
{
    int n = 0 ;
    int x ;
    while(scanf("%d", &x) != -1)
    {
        a[n] = x ;
        n++ ;
    }
    for(int i=0 ; i<=n ; i++)
    {
        int check = 1 ;
        for(int j=0 ; j<i ; j++)
        {
            if(a[i] == a[j])
            {
                check = 0 ; break ;
            }
        }
        if(check)
        {
            if(nt(a[i]))
            {
                int cnt = 1 ;
                for(int j=i+1 ; j<n ; j++)
                {
                    if(a[i] == a[j])
                    {
                        cnt++ ;
                    }
                }
                printf("%d %d\n", a[i] , cnt ) ;
            }
        }
    }
    return 0 ;
}