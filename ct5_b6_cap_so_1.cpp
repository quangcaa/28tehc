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
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i != j && a[i]+a[j]==k)
            {
                dem++ ;
            }
        }
    }
    printf("%d", dem/2) ;
}