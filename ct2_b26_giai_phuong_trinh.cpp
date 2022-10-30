#include<stdio.h>
#include<math.h>

int main()
{
    int a , b , n ;
    scanf("%d %d %d", &a , &b , &n);
    // double x ;
    // double y ;
    // int check = 0 ;
    // for(x=0 ; x<=1000 ; x++)
    // {
    //     y =1.0*(n-1.0*a*x)/b;
    //     if(y>=0)
    //     {
    //         if(x==(int)x && y==(int)y)
    //         {
    //             check = 1 ;
    //         }
    //     }
    // }
    // if(check==1)
    //     printf("YES");
    // else
    //     printf("NO");

    //cach2
    for(int i=0 ; i<=n/a ; i++)
    {
        int du = n-(a*i);
        if(du%b==0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}