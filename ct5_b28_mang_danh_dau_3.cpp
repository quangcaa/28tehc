#include<stdio.h>
#include<math.h>

int a[1001] ;
int dem[1000001] ;

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
        dem[a[i]] ++ ;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(dem[a[i]] != 0 )
        {
            printf("%d %d\n", a[i] , dem[a[i]]);
            dem[a[i]] = 0 ;
        }
    }
}