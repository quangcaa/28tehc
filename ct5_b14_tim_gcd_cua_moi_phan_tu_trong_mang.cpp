#include<stdio.h>
#include<math.h>

int a[1000001] ;

int ucln(int a , int b)
{
    if(b==0)
    {
        return a ;
    }
    else
    {
        return ucln(b , a%b) ;
    }
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    int uc = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        uc = ucln(uc , a[i]) ;
    }
    printf("%d", uc) ;
}