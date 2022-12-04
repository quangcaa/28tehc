#include<string>
#include<iostream>
#include<fstream>

using namespace std ;

int main()
{
    string s ; cin >> s ;
    ifstream file(s) ;
    string k ;
    file >> k ;
    cout << k ;
}