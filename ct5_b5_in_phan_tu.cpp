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
    int dem = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] % 2 == 0 && i%2==0)
        {
            printf("%d ", a[i]) ;
            dem++;
        }
    }
    if(dem==0)
    {
        printf("NONE") ;
    }
}