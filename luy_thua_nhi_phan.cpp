#include<stdio.h>
#include<math.h>

//a^b : Luy thua nhi phan

long long lt(int a, int b)
{
    long long res = 1 ;
    //xet tung bit cua b
    while(b!=0)
    {
        if(b%2==1)
        {
            //b la so le: bit cuoi cung hien tai cua b bang 1
            res *= a ;
        }
        a *= a ;
        b /= 2 ;
        
    }
}