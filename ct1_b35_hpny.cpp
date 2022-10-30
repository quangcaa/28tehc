#include<stdio.h>
#include<math.h>

int main(){
    int h , m ;
    scanf("%d %d", &h , &m);
    int x = (23-h)*60;
    printf("%d", x+(60-m));
    return 0;
}