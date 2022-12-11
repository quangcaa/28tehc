#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>

using namespace std ;

int lat(int n)
{
    int lat = 0 ;
    while(n)
    {
        lat = lat*10 + n%10 ;
        n/=10 ;
    }
    return lat ;
}

int n = 1000001 ;
int prime[1000001] ;

void sang()
{
    for(int i=0 ; i<=n ; i++)
    {
        prime[i] = 1 ;
    }
    prime[0] = prime[1] = 0 ;
    for(int i=2 ; i<=sqrt(n) ; i++ )
    {
        if(prime[i] == 1)
        {
            for(int j=i*i ; j<=n ; j+=i)
            {
                prime[j] = 0 ;
            }
        }
    }
}

int main()
{
    int n ; cin >> n ;
    sang() ;
    for(int i=0 ; i<=1000001 ; i++)
    {
        if(lat(i)==i)
        {
            prime[lat(i)] = 0 ;
        }
        if(prime[lat(i)] == 0)
        {
            prime[i] = 0 ;
        }
    }
    while(n)
    {
        int x ; cin >> x ;
        int cnt[x+1] ;
        for(int i=0 ; i<=x ; i++)
        {
            cnt[i] = 0 ;
        }
        for(int i=0 ; i<=x; i++)
        {
            if(prime[i] && cnt[i] == 0 && lat(i) <= x)
            {
                cout << i << " " << lat(i) << " " ;
                cnt[i] = 1 ;
                cnt[lat(i)] = 1 ;
            }
        }
        cout << endl ;
        n-- ;
    }
}