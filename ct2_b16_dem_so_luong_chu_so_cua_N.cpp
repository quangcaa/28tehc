#include<stdio.h>
#include<math.h>

int main(){
    long long n ;
    scanf("%lld", &n);
    int sl = 0 ;
    if(n==0){
        printf("1");
    }else{
        while(n != 0){
        ++sl;
        n/=10;
    }
    printf("%d", sl);
    }
    return 0;
}