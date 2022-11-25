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
    printf("%d ", a[0]) ;
    int max = a[0] ;
    for(int i=1 ; i<n ; i++)
    {
        if(a[i] > max)
        {
            printf("%d ", a[i]) ;
            max = a[i] ;
        }
    }
}