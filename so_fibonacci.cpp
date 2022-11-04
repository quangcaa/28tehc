#include<stdio.h>
#include<math.h>

//btoan hay gap

//btoan 1 : cho 1 so , kiem tra xem so nay co phai la 1 so trong day fibonacci hay ko 
//btoan 2 : liet ke n so fibonacci dau tien
//btoan 3 : in ra so fibonacci thu n


//in ra day so fibonacci

int main()
{
    long long f[100] ;
    f[0] = 0 ;
    f[1] = 1 ;
    for(int i=2 ; i<=100 ; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    for(int i=0 ; i<= 100 ; i++)
    {
        printf("So fibonacci thu %d la : %lld", i , f[i]);
    }
}


//check 1 so fibo

int checkFibo(long long n)
{
    if(n==1 || n==0)
    {
        return 1 ;
    }
    long long fn1 = 1 , fn2 = 0 ;
    for(int i=2 ; i<=92 ; i++)
    {
        long long fn = fn1 + fn2 ;
        if(fn==n)
        {
            return 1 ;
        }
        fn2=fn1 ;
        fn1=fn ;
    }
    return 0 ;
}

//in ra n so fibonaci dau tien : 0 -> n-1

void inFibo(int n)
{
    if(n==1) printf("0");
    else if(n==2) printf("0 1");
    else
    {
        printf("0 1 ");
        long long fn1 = 1 , fn2 = 0 ;
        for(int i=2 ; i<n ; i++)
        {
            long long fn = fn1 + fn2 ;
            printf("%lld", fn);
            fn2 = fn1 ;
            fn1 = fn ;
        }
    }
}

//in ra so fibonaci thu n

long long findfibo(int n)
{
    if(n==0 || n==1)
    {
        return n ;
    }
    long long fn1 = 1 , fn2 = 0 ;
    long long fn ;
    for(int i=2 ; i<=n ; i++)
    {
        fn = fn1 + fn2 ;
        fn2 = fn1 ;
        fn1 = fn ;
    }
    return fn ;
}