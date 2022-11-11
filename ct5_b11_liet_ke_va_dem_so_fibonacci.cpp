#include<stdio.h>
#include<math.h>

#define ll long long

ll a[1000001] ;
int checkfibo(long long n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    ll f1=1 , f2=1 ;
    for(int i=2 ; i<92 ; i++)
    {
        ll fn = f1 + f2 ;
        if(fn == n)
        {
            return 1 ;
        }
        f2 = f1 ;
        f1 = fn ;
    }
    return 0 ;
}

//CACH 2 ::: quy hoach dong
// ll F[100] ;
// void ktao()
// {
//     F[0] = 0 ;
//     F[1] = 1 ;
//     for(int i=2 ; i<=92 ; i++)
//     {
//         F[i] = F[i-1] + F[i-2] ;
//     }
// }

// int check(ll n)
// {
//     for(int i=0 ; i<n ; i++)
//     {
//         if(F[i] == n)
//         {
//             return 1 ;
//         }
//     }
//     return 0 ;
// }


int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%lld", &a[i]) ;
    }
    int dem = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(checkfibo(a[i]))
        {
            printf("%lld ", a[i]) ;
            dem++ ;
        }
    }
    if(dem==0)
    {
        printf("NONE") ;
    }
    return 0 ;
}