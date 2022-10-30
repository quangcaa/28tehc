#include<stdio.h>
#include<math.h>

int main(){
    int n ;
    scanf("%d", &n);
    int bia = n/28 ;
    int vo = bia ;
    while(vo>=3){
        int sobiadoi = vo/3 ;
        bia += sobiadoi;
        vo = vo%3 + sobiadoi ;
    }
    printf("%d", bia);
    return 0;
}