#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[100] ;
    scanf("%s", a) ;
    for(int i=1 ; i<strlen(a) ; i++)
    {
        if(abs(a[i]-a[i-1]) != 1) 
        {
            printf("NO") ;
            return 0 ;
        }
    }
    printf("YES") ;
    return 0 ;
}