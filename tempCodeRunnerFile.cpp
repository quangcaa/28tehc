#include<stdio.h>
#include<math.h>

int main()
{
    int n ;
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++)
    {
        int so;
        scanf("%d", &so);
        if(so%2==0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    }
    return 0;
}