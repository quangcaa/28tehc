#include<stdio.h>
#include<math.h>

int a[10001] ;

int main()
{
    int n = 0 ;
    int tmp ; 
    while(scanf("%d", &tmp) != -1)
    {
        a[n] = tmp ;
        n++ ;
    }
    int chan = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] % 2 ==0)
        {
            chan ++ ;
        }
    }
    if(chan > n-chan) printf("CHAN") ;
    else if(chan < n-chan) printf("LE") ;
    else printf("CHANLE") ;
}