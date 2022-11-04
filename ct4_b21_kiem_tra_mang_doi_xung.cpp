#include<stdio.h>
#include<math.h>

int a[1000001] ;

int check(int d, int c, int a[])
{
    if(d>=c) return 1 ;
    if(a[d] != a[c])
        return 0 ;
    else
        return check(d+1 , c-1, a) ;
}   

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    int d = 0 , c = n-1 ;
    if(check(d,c,a))
        printf("YES");
    else
        printf("NO");
}