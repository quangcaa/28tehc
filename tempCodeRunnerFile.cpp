#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int a[101] ;

int main()
{
    int n ;
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    int sem = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        sem += a[i] ;
    }
    cout << fixed << setprecision(2) << (double)sem/n ;
    return 0;
}