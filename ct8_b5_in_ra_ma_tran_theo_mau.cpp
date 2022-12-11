#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n ; scanf("%d", &n) ;
    int a[n][n] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            scanf("%d", &a[i][j]) ;
        }
    }
    printf("Pattern 1:\n") ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ", a[j][i]) ;
        }
        printf("\n") ;
    }
    printf("Pattern 2:\n") ;\
    for(int i=n-1 ; i>=0 ; i--)
    {
        for(int j=n-1 ; j>=0 ; j--)
        {
            printf("%d ", a[i][j]) ;
        }
        printf("\n") ;
    }
    printf("Pattern 3:\n") ;
    for(int i=n-1 ; i>=0 ; i--)
    {
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ", a[j][i]) ;
        }
        printf("\n") ;
    }
    printf("Pattern 4:\n") ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=n-1 ; j>=0 ; j--)
        {
            printf("%d ", a[i][j]) ;
        }
        printf("\n") ;
    }
}