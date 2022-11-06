#include<iostream>
#include<math.h>

using namespace std;

// int check (int x) 
// {
//     if(x==0) return 0 ;
//     else
//     {
//         if(x%10 %2 ==0)
//         {
//             return 1+ check(x/10);
//         }
//         else
//         {
//             return check(x/10) ;
//         }
//     }
// }

// int main()
// {
//     int n ; cin >> n ;
//     for(int i=1 ; i<=n ; i++)
//     {
//         int x ;
//         scanf("%d", &x) ;
//         if(check(n))
//         {
//             cout << "yes" ;
//         }
//         else
//         {
//             cout << "no" ;
//         }
//     }
// }
int a[100000];

void check(long long n)
{
    int chan=0  , le=0 ;
    if(n==0)
    {
        cout << chan << " " << le << endl ;
        return ;
    }
    else
    {
        if(n%10 %2==0)
        {
            chan++;
        }
        else
        {
            le++;
        }
        return check(n/10) ;
    }
}

int main()
{
    int n ; cin >> n ;
    for(long long i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    for(long long i=0 ; i<n ; i++)
    {
        cout << a[i];
    }
}