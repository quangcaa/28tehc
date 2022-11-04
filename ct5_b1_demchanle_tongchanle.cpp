#include<stdio.h>
#include<math.h>

int a[1001] ;
int sumchan = 0 , sumle = 0 ;
int chan = 0 , le = 0 ;

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] % 2 ==0)
        {
            chan++;
            sumchan+=a[i];
        }
        else
        {
            le++;
            sumle+=a[i];
        }
    }
    printf("%d\n%d\n%d\n%d", chan , le , sumchan , sumle) ;
}