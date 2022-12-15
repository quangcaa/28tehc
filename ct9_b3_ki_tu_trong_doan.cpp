#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char a[10001] ;
    scanf("%s", a) ;
    int tong = 0 ;
    for(int i=0 ; i<strlen(a) ; i++)
    {
        if(isdigit(a[i]))
        {
            tong += a[i] - '0' ;
        }
    }
    printf("%d", tong) ;
}