#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int check[1000001] ;

int main()
{
    int n ; scanf("%d", &n) ;
    int min = 1e9 , max = -1e9 ;
    for(int i=0 ; i<n ; i++)
    {
        int x ; scanf("%d", &x) ;
        check[x] = 1 ;
        min = fmin(min,x) ;
        max = fmax(max,x) ;
    }
    int thieu = 0 ;
    for(int i=min ; i<=max ; i++)
    {
        if(check[i]==0)
        {
            thieu ++ ;
        }
    }
    printf("%d", thieu) ;
}