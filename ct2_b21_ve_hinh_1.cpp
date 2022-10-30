#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    // hinh1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // hinh2
    for (int i = 1; i <= n; i++)
    {
        if (i >= 2 && i <= n - 1)
        {
            printf("*");
            for (int j = 2; j <= n - 1; j++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");

    //hinh3
    for(int i=1 ; i<=n ; i++)
    {
        if(i>=2 && i<=(n-1))
        {
            printf("*");
            for(int j=2 ; j<=n-1 ; j++)
            {
                printf("#");
            }
            printf("*\n");
        }
        else
        {
            for(int j=1 ; j<=n ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");

    //hinh4 
    for(int i=1 ; i<=n ; i++)
    {
        if(i>=2 && i<=(n-1))
        {
            printf("%d ", i);
            for(int j=2 ; j<=n-1 ; j++)
            {
                printf("  ");
            }
            printf("%d\n", i);
        }
        else
        {
            for(int j=1 ; j<=n ; j++)
            {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
    return 0;
}