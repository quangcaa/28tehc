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
    int max = 0 , tmp ;
    for(int i=0 ; i<1000000 ; i++)
    {
       if(dem[i] > max)
       {
            max = dem[i] ;
            tmp = i ;
       }
    }
    printf("%d %d", tmp , max ) ;
}