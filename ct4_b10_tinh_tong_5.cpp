#include<stdio.h>
#include<math.h>

double ct(int n)
{
    if(n==0)
        return 0;
    else
        return 1./n + ct(n-1) ;
}

int main()
{
    int n ; scanf("%d", &n) ;
    printf("%.3lf", ct(n)) ;
}