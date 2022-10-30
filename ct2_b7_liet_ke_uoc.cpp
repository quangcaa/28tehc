#include<stdio.h>
#include<math.h>

int main(){
    int n ;
    scanf("%d", &n);
    int souoc =0 ;
    for(int i=1 ; i<=n ; i++){
        if(n%i==0){
            souoc+=1;
        }
    }
    printf("%d\n", souoc);
    for(int i=1 ; i<=n ; i++){
        if(n%i==0){
            printf("%d " , i);
        }
    }

    
    return 0;
}