#include<stdio.h>
#include<math.h>

int a[1001] ;

int main()
{
    int n ;
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        int check = 1 ;
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
            int count = 1 ;
            for(int j=i+1 ; j<n ; j++)
            {
                if(a[i] == a[j])
                {
                    count++ ;
                }
            }
            printf("%d %d\n", a[i] , count );
        }
    }
}