#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char n[100] ;
    scanf("%s", n) ;
    if(strlen(n)%2==0)
    {
        printf("NOT FOUND") ;
    }
    else
    {
        printf("%c", n[strlen(n)/2]) ;
    }
}