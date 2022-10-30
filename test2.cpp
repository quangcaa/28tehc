#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int tong_so_tim_dc =0 ; 
    int i=10000;
    for(i; i<=99999 ; i++)
    {
        int n=i;
        int haisd=0;
        int haisc=0;
        haisc += i%10;
        i/=10;
        haisc += i%10;
        i/=100;
        haisd += i%10;
        i/=10;
        haisd += i%10;
        if(haisd == haisc)
            cout << n << endl;
            tong_so_tim_dc ++ ;
        
    }
    cout << tong_so_tim_dc ;
    return 0;
}