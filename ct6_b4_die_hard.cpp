#include<stdio.h>
#include<math.h>

int a[1000001] ;

int check(int a[] , int n)
{
    int dem25 = 0 , dem50 = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==25) ++dem25 ; 
        else if(a[i]==50) 
        {
            if(dem25==0)
            {
                return 0 ;
            }
            --dem25 ;
            ++dem50 ;
        }
        else if(a[i]==100)
        {
            if(dem25==0 || (dem25*25 + dem50*50 < 75))
            {
                return 0 ;
            }
            if(dem50 != 0)
            {
                --dem50 ;
                --dem25 ;
            }else
            {
                dem25 -= 3 ;
            }
        }
    }
    return 1 ;
}

int main()
{
    int n ; 
    scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    if(check(a,n))
    {
        printf("YES") ;
    }
    else
    {
        printf("NO") ;
    }
}