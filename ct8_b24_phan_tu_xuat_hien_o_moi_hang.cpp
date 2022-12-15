#include<stdio.h>
#include<math.h>

int a[101][101] ;
int cnt[101] ;

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            scanf("%d", &a[i][j]) ;
        }
    }
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if(cnt[a[i][j]]==i-1)
            {
                cnt[a[i][j]] = i ;
            }
        }
    }
    int check = 0 ;
    for(int i=0 ; i<=100 ; i++)
    {
        if(cnt[i]==n)
        {
            printf("%d ", i) ;
            check = 1 ;
        }
    }
    if(check==0)
    {
        printf("NOT FOUND") ;
    }
    return 0 ;
}