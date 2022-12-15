#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char a[100001] ;

void lat(char a[])
{
    int l = 0 , r = strlen(a)-1 ;
    while(l<=r)
    {
        char tmp = a[l] ; 
        a[l] = a[r] ;
        a[r] = tmp ;
        l++ , r-- ;
    }
}

void it(char a[])
{
    for(int i=0 ; i<strlen(a) ; i++)
    {
        a[i] = tolower(a[i]) ;
    }
}

void ih(char a[])
{
    for(int i=0 ; i<strlen(a) ; i++)
    {
        a[i] = toupper(a[i]) ;
    }
}

int main()
{
    scanf("%s", a) ;
    lat(a) ;
    printf("%s\n", a) ;
    lat(a) ;
    it(a) ;
    printf("%s\n" , a) ;
    ih(a) ;
    printf("%s\n", a) ;
    
}