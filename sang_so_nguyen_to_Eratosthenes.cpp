#include<stdio.h>
#include<math.h>

int n = 10000000 ;
int prime[10000001] ;

//O(NloglogN)

void sang()
{
    //buoc 1 :
    for(int i=0 ; i<=n ; i++)
    {
        prime[i] = 1 ; //bdau coi tat ca cac so tu 0 toi n deu la so nguyen to
    }
    //buoc 2 :
    prime[0] = prime[1] = 0 ;
    for(int i=2 ; i<=sqrt(n) ; i++ )
    {
        //neu i la so nguyen to => loai bo cac boi cua i<=n
        if(prime[i] == 1)
        {
            //duyet cac boi cua i : i * i 
            for(int j=i*i ; j<=n ; j+=i)
            {
                prime[j] = 0 ;
            }
        }
    }
}

int main()
{
    sang();
    for(int i=0 ; i<=10000 ; i++)
    {
        if(prime[i])
        {
            printf("%d ", i) ;
        }
    }
}