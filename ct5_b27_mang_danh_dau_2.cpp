#include<stdio.h>
#include<math.h>

int a[1001] ;
int cnt[1000001] ;

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
        cnt[a[i]] ++ ;
    }
    for(int i=0 ; i<1000001 ; i++)
    {
        if(cnt[i] != 0)
        {
            printf("%d %d\n" , i , cnt[i]) ;
        }
    }
    return 0 ;
}