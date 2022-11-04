#include<stdio.h>
#include<math.h>

int a[1001] ;

int nt(int n)
{
    if(n<2) return 0 ;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    int sum = 0 ;
    int dem = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(nt(a[i]))
        {
            sum += a[i];
            dem++;
        }
    }
    printf("%.3lf", 1.0*sum/dem) ;
}