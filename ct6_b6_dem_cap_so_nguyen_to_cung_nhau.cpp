#include<stdio.h>
#include<math.h>

int a[1001] ; 

int gcd(int a , int b)
{
    if(b==0) return a ; 
    else return gcd(b , a%b) ;
}

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    int dem=0 ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(gcd(a[i], a[j])==1)
            {
                dem++ ;
            }
        }
    }
    printf("%d", dem ) ;
}