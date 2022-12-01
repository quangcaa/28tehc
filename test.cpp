    #include<iostream>
    #include<iomanip>
    using namespace std ;

    double dq(int n)
    {
        if(n==0 || n==1)
        {
            return n ;
        }
        return dq(n-1) + dq(n-2) ;
    }

    int main()
    {
        int n ; cin >> n ;
        cout << dq(n) ;
    }