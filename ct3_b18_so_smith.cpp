//lam lai bai nay

#include<stdio.h>
#include<math.h>


//check dk1 so smith < ko phai la so nguyen to >
int check(int x)
{
    if(x<2) return 0;
    for(int i=2 ; i<=sqrt(x) ; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

//check dk2 so smith < tong cac chu so cua N == tong cac chu so cua cac thua so nguyen to trong ptich cua N >
int tongcs(int x)
{
    int sum1 = 0 ;
    while(x != 0)
    {
        sum1 += x%10 ;
        x/=10;
    }
    return sum1 ;
}

int tongpt(int x)
{
    int sum2 = 0 ;
    for(int i=2 ; i<=sqrt(x) ; i++)
    {
        if(x % i == 0)
        {
            while(x % i == 0)
            {
                if(i<=10)
                {
                sum2 += i ;
                x /= i;
                }
                else 
                {
                    while(i!=0)
                    {
                        sum2 += i%10;
                        i/=10;
                    }
                }
            }
        }
    }
    if(x > 1)
    {
        while(x != 0)
        {
            sum2 += x%10 ;
            x/=10;
        }
    }
    return sum2 ;
}

//in
int main()
{
    int n ; scanf("%d", &n);
    if(check(n) == 0 && tongcs(n) == tongpt(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}