#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int tk(int a[], int n , int x)
{
    int l = 0 , r = n-1 ;
    while(l <= r)
    {
        int mid = (l+r) / 2 ;
        if(a[mid] == x)
        {
            return 1 ;
        }
        else if(a[mid] < x)
        {
            r = mid - 1 ;
        }
        else
        {
            l = mid + 1 ;
        }
    }
    return 0 ;
}

int main()
{
    int n ; scanf("%d", &n) ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    int q ; scanf("%d", &q) ;
    while(q)
    {
        int x ; scanf("%d", &x) ;
        if(tk(a,n,x))
        {
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
        q-- ;
    }
}