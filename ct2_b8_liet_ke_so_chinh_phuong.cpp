#include<stdio.h>
#include<math.h>

int main(){
    long long n ;
    scanf("%lld", &n);
    long long i = 1 ;
    for(i ; i<=sqrt(n) ; i++){
        printf("%lld ", i*i);
    }
    return 0 ;
} 