#include<stdio.h>
#include<math.h>

int main(){
    int n ;
    scanf("%d", &n);
    long long x =1 ;
    if(n>0){
        for(int i=1 ; i<=n ; i++){
        x *= i ;
    }
    printf("%lld",x);
    }
    return 0;
}