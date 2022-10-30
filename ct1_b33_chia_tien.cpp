#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    long long x = a + b + c + n ;
    if(x%3==0){
        int final = x/3;
        if(final >= a && final >= b && final >= c){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        printf("NO");
    }
    return 0;
}