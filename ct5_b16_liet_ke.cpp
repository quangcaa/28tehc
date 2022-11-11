#include<stdio.h>
#include<math.h>

int a[101] ;

int nt(int n )
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
            return 0 ;
    }
    return n > 1 ;
}

int tn(int n)
{
    int sau = 0 , temp = n ;
    while(n)
    {
        sau = sau*10 + n%10 ;
        n/=10 ;
    }
    return sau == temp ;
}

int cp(int n)
{
    int x = sqrt(n) ;
    return x*x == n ;
}

int tcs(int n)
{
    int sum=0 ;
    while(n)
    {
        sum += n%10 ;
        n/=10 ;
    }
    return nt(sum) ;
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    int f1 = 0 , f2 = 0 , f3 = 0 , f4 = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(nt(a[i])) { f1++ ; } 
        if(tn(a[i])) { f2++ ; }
        if(cp(a[i])) { f3++ ; }
        if(tcs(a[i])) { f4++ ; }
    }
    printf("%d\n%d\n%d\n%d", f1 , f2 , f3 , f4) ;
}