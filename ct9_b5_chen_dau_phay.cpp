#include<stdio.h>
#include<string.h>
#include<ctype.h>

void phay(char a[])
{
    char kq[1000] ;
    int cnt = 0  , index = 0  ;
    for(int i=strlen(a)-1 ; i>=0 ; i--)
    {
        ++cnt ;
        kq[index] = a[i] ;
        ++index ;
        if(cnt % 3 == 0 && i != 0)
        {
            kq[index] = ',' ;
            ++index ;
        }
    }
    for(int i=index-1 ; i>=0 ; i--)
    {
        printf("%c", kq[i]) ;
    }
}

int main()
{
    char a[100] ;
    scanf("%s", a) ;
    phay(a) ;
}