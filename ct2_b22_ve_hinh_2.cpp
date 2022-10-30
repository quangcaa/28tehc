#include<stdio.h>
#include<math.h>

int main()
{
    int n ;
    scanf("%d", &n);

    //hinh1
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //hinh2 
    for(int i=n ; i>0 ; i--)
    {
        for(int j=i ; j>0 ; j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //hinh3
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if(j<=n-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");


    //hinh4
    for(int i=0 ; i<=n ; i++)
    {
        for(int j=n ; j>0 ; j--)
        {
            if(j<=n-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }printf("\n");
    }

    //hinh5
    for(int i=1 ; i<=n ; i++)
    {
        if(i<=2 || i==n)
        {
            for(int j=1 ; j<=i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }else
        {
            for(int j=1 ; j<=i ; j++)
            {
                if(j==1 || j==i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}