// bai nay chi dung khi 0 <= a[i] <= 1e7 

#include<stdio.h>
#include<math.h>

int a[1001] ;
int check[1000001] ;

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
        check[a[i]] = 1 ;
    }
    int cnt = 0 ;
    for(int i=0 ; i<=1000000 ; i++)
    {
        if(check[i] != 0)
        {
            cnt ++ ;
        }
    }
    printf("%d", cnt) ;
    return 0 ;
}