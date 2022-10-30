#include<stdio.h>
#include<math.h>

int main(){
    int c1 , c2 , c3 , c4 , c5 ;
    scanf("%d %d %d %d %d", &c1 , &c2 , &c3 , &c4 , &c5);
    int x = c1 + c2 + c3 + c4 + c5 ;
    if(x%5==0){
        if(x/5!=0){
            printf("%d",x/5);
        }else{
            printf("-1");
        }
    }else{
        printf("-1");
    }
    return 0;
}