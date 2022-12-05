#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void sxc(int a[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        int pos = i-1 , gt = a[i] ;
        while(pos>=0 && gt<a[pos])
        {
            a[pos+1] = a[pos] ;
            --pos ;
        }
        a[pos+1] = gt ;
        printf("Buoc %d: ", i) ;
        for(int i=0 ; i<n ; i++)
        {
            printf("%d ", a[i]) ;
        }
        printf("\n") ;
    }
}

int main()
{
    int n ; scanf("%d", &n) ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    sxc(a,n) ;
}