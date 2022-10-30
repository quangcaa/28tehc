#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>

using namespace std;

int main()
{
	int n; cin >> n ;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    for(int j=1 ; j<=n ; j++)
    {
        if(a[j-1] != a[n-j+1-1])
        {
            cout << "Asymmetric array.";
            return 0;
        }
    }
    cout << "Symmetric array.";
}
