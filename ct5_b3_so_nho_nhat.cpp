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
    int min = a[0] ;
    int dem =0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] <min)
        {
            min = a[i] ;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] == min)
        {
            dem++;
        }
    }
    printf("%d", dem) ;
}