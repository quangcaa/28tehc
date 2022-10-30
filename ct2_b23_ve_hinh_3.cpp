#include<stdio.h>
#include<math.h>

int main()
{
    int n ; scanf("%d", &n);
    int so1=0;

    //hinh1
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            so1+=1;
            printf("%d ", so1);
        }
        printf("\n");
    }
    printf("\n");

    
    //hinh2
    for(int i=1 ; i<=n ; i++)
    {
        int ktao=i;
        for(int j=1 ; j<=n ; j++)
        {
            printf("%d ", ktao);
            ktao++;
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
                printf("~");
            }else
            {
                printf("%d", i);
            }
        }
        printf("\n");
    }
    printf("\n");


    //hinh4
    for(int i=1 ; i<=n ; i++)
    {
        int ktao = i;
        int kc = n-1;
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d ", ktao);
            ktao+=kc;
            kc--;
        }
        printf("\n");
    }

    return 0;
}