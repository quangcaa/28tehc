#include<stdio.h>
#include<math.h>

int cnt[1000001] ;

int main()
{
    int n ; 
    scanf("%d", &n) ;
    for(int i=0 ; i<n; i++)
    {
        int x ; scanf("%d", &x) ;
        cnt[x] ++ ;
        if(cnt[x]==2)
        {
            printf("%d", x);
            return 0 ;
        }
    }
    printf("-1");
    return 0 ;
}