#include<stdio.h>
#include<math.h>

int a[1001] ;

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    int k ; 
    scanf("%d", &k) ;
    int dem = 0 ;
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[i]+a[j]==k)
            {
                dem++ ;
            }
        }
    }
    printf("%d", dem) ;
}