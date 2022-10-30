#include<math.h>
#include<stdio.h>


//1.giai thua

int gt(int n)
{
    int res =1 ;
    for(int i=1 ; i<=n ; i++)
    {
        res *= i ;
    }
}


//2.so nguyen to

int songuyento(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2 ; i <= sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1 ;
}


//3.tong uoc , dem uoc 

//tong
int tong(int n)
{
    int sum =0 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            sum += i ;
            if(n % i != i)
            {
                sum+=n/i;
            }
        }
        
    }
    return sum ;
}

//dem
int dem(int n)
{
    int cnt = 0 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            ++cnt;
            if(n % i != i)
            {
                ++cnt;
            }
        }
    }
    return cnt;
}


//4.so chinh phuong

int cp(int n)
{
    int can = sqrt(n);
    if(can*can==n)
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
}


//5.so hoan hao

int hh(int n)
{
    int sum=0 ;
    for(int i=1 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            sum += i;
            if(i != n/i)
            {
                sum += n/i;
            }
            
        }
    }
    // if(sum-n==n)
    // {
    //     return 1 ;
    // }
    // else 
    // {
    //     return 0;
    //}
    // = cau lenh o duoi 

    return sum ==n ;
}


//6.phan tich thua so nguyen to

void ptich(int n)
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                // i la thua so nguyen to cua n
                printf("%d", i);
                n /= i;
            }
        }
    }
    //neu chua ptich thua so ng to xong
    if(n != 1)
    {
        printf("%d", n);
    }
}
//tim ucln cua 1 so bang cach (e1+1)*(e2+1)*...*(en+1). vs e1 , e2 ,..., en la cac so mu cua day ptich so nguyen to.


//7.ucln , bcnn

//ucln
int ucln(int a , int b)
{
    while(b != 0)
    {
        int du = a % b ;
        a = b ;
        b = du;
    }
    return a;
}

//bcnn
int bcnn(int a , int b)
{
    return a*b/ucln(a,b);
}


//8.so thuan nghich ( la so doc xuoi hay nguoc deu la 1 so )

int tn(int a)
{
    int lat=0 ; 
    int temp = a ;
    while(a != 0)
    {
        lat = lat *10 + a%10 ; // tu lay vd 
        a /= 10;
    }

    if(temp == lat)
        return 1 ;
    else
        return 0 ;
}


//9.to hoc chap K cua N

// cach don gian 

long long giaithua(int n)
{
    long long res =1 ;
    for(int i=1 ; i<=n ; i++)
    {
        res *= i ;
    }
    return res;
}

long long tohop(int n , int k)
{
    return giaithua(n) / (giaithua(k) * giaithua(n-k));
}

//cach 2

long long tohop2(int n , int k)
{
    k = fmin(k , n-k);
    long long res=1 ;
    for(int i=1 ; i<=k ; i++)
    {
        res *= (n-i+1);
        res /= i;
    }
    return res ;
}


//10.tam giac pascal

int main()
{
    int n ;
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<=i ; j++)
        {
            printf("%lld", tohop2(i, j));
        }
        printf("\n");
    }
}