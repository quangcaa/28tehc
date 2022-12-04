    #include<iostream>
    #include<iomanip>
    using namespace std ;

    double dq(int n)
    {
        if(n==1)
        {
            return 1 ;
        }
        else
        {
            return  1.0/n+dq(n-1) ;
        }
    }

    int main()
    {
        int n ; cin >> n ;
        double sum = 0.0 ;
        for(int i=1 ; i<=n ; i++)
        {
            sum += dq(i) ;
        }
        cout << fixed << setprecision(2) << sum ;
    }