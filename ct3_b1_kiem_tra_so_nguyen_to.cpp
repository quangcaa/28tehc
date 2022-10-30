#include<stdio.h>
#include<math.h>


int songuyento(long long a)
{
    if(a<2)
    {
        return 0;
    }
    for(int i=2 ; i<=sqrt(a) ; i++)
    {
        if(a%i==0)
        {
            return 0 ;
        }
    }
    return 1;
}

int main()
{
    long long n ; scanf("%lld", &n);
    if(songuyento(n)==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}