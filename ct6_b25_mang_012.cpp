#include<stdio.h>
#include<math.h>

int a[10] ;

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        int x ; scanf("%d", &x) ;
        a[x] ++ ;
    }
    for(int i=0 ; i<=2 ; i++)
    {
        while(a[i])
        {
            printf("%d ", i) ;
            a[i] -- ;
        }
    }
}