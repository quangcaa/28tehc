
#include<stdio.h>
#include<math.h>

int a[1000001] ;

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    a[n] = a[n-1] ;
    int cnt = 1 , sum = a[0] , kqcnt = 0 , kqsum = a[0] , vt = 0  ;
    for(int i=1 ; i<=n ; i++)
    {
        if(a[i] != a[i-1])
        {
            cnt ++ ;
            sum += a[i] ;
        }
        else
        {
            if(cnt > kqcnt)
            {
                kqcnt = cnt ;
                kqsum = sum ;
                vt = i - cnt ;
            }
            else if(cnt == kqcnt)
            {
                if(sum > kqsum)
                {
                    vt = i-cnt ;
                    kqsum = sum ;
                }
            }
            cnt = 1 , sum = a[i] ;
        }
    }
    printf("%d\n", kqcnt );
    for(int i=0 ; i<kqcnt ; i++)
    {
        printf("%d ", a[vt+i]) ;
    }
}