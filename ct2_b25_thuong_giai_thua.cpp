#include<stdio.h>
#include<math.h>

int main()
{
    int n ;
    scanf("%d", &n);
    double sum = 0 ;
    long long mau = 1 ;
    for(int i=1 ; i<=n ; i++)
    {
        sum+=1.0*1/mau;
        mau *= i;
    }
    printf("%.4lf", sum);
    return 0;
}