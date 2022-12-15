#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int dx[8] = {-2,-1,1,2,2,1,-1,-2} ;
int dy[8] = {-1,-2,-2,-1,1,2,2,1} ;
int a[101][101] ;
int n ;

void loang(int i , int j )
{
    a[i][j] = 2 ;
    for(int k=0 ; k<8 ; k++)
    {
        int i1 = i + dx[k] , j1 = j + dy[k] ;
        if(i1>=0 && j1>=0 && i1<n && j1<n && a[i1][j1]==1)
        {
            loang(i1,j1) ;
        }
    }
}

int main()
{
    scanf("%d", &n ) ;
    int s , t , u , v ; scanf("%d%d%d%d", &s , &t , &u , &v) ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            scanf("%d", &a[i][j]) ;
        }
    }
    loang(s-1,t-1) ;
    if(a[u-1][v-1]==2)printf("YES") ;
    else printf("NO") ;
}