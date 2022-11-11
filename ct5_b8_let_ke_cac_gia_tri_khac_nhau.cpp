#include<stdio.h>
#include<math.h>

int check[1000000] ;
int a[100000] ;


int main()
{
    int n ; 
    scanf("%d", &n) ;

    //cach1
    for(int i=0 ; i<n ; i++)
    {
        int x ;
        scanf("%d", &x);
        if(check[x] != 1 )
        {
            printf("%d ", x) ;
            check[x] =1 ;
        }
    }

    //cach2
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        int check =1 ;
        for(int j=0 ; j<i ; j++)
        {
            if(a[i] == a[j])
            {
                check = 0 ; 
                break ;
            }
        }
        if(check) 
        {
            printf("%d ", a[i]) ;
        }
    }

    return 0;
}