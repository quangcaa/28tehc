#include<stdio.h>
#include<math.h>

int a[1000001] ;

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<n-1 ; i++)
    {
        if(a[i] >= a[i+1])
        {
            printf("NO") ;
            return 0 ;
        }
    }
    printf("YES") ;
    return 0 ;
}