#include<stdio.h>
#include<math.h>

int main(){
    int n ;
    scanf("%d" , &n);
    long long sum=0 ;
    for(int i=1 ; i<=n ; i+=1){
        sum += 2*i-1;
    }
    printf("%lld", sum);
    return 0 ;
}