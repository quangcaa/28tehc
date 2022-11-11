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
    for(int i=0 ; i<n ; i++)
    {
        if(i>0 && i<n-1)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                printf("%d ", a[i]) ;
            }
        }
    }
}