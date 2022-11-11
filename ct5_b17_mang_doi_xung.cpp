#include<stdio.h>
#include<math.h>

int a[1000001] ;

int check(int a[] , int n)
{
    int d=0 , c=n-1 ;
    while(d <= c)
    {
        if(a[d] != a[c])
            return 0;
        ++d , --c ;
    }
    return 1;
}

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    // for(int i=0 ; i<n ; i++)
    // {
    //     int cuoi = n-i-1 ;
    //     if(a[i] != a[cuoi])
    //     {
    //         printf("NO") ;
    //         return 0 ;
    //     }
    // }
    // printf("YES") ;

    if(check(a , n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0 ;
}