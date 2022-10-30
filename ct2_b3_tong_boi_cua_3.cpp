#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    long long sum = 0 ;
    for(int i = 0 ; i <= n ; i+=3){
        sum +=i;
    }
    printf("%lld", sum);
    return 0;
}