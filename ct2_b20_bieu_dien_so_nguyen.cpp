#include<stdio.h>
#include<math.h>

int main()
{
    int n ;
    scanf("%d", &n);
    int sl =0 ;
    if(n>1)
    {
        printf("%d\n", n/2);
        if(n%2==0)
        {
            for(int i=1 ; i<=n/2 ; i++)
            {
                printf("2 ");
            }
        }else
        {
            for(int i=1 ; i<=(n/2)-1 ; i++)
            {
                printf("2 ");
            }
            printf("3");
        }
    }
    else
    {
        printf("-1");
    }
    return 0;
}