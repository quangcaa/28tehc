#include<stdio.h>
#include<math.h>

// int th(int n)
// {
//     if(n==0)
//         return 0;
//     else
//         return pow(-1,n)*n + th(n-1);
// }

int th(int n)
{
    if(n==0)
        return 0;
    else
    {
        if(n%2==0)
            return n + th(n-1) ;
        else
            return -n + th(n-1) ;
    }
}


int main()
{
    int n ; scanf("%d", &n) ;
    printf("%d", th(n));
}