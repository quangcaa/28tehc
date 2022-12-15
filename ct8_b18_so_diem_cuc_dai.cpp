#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int a[101][101] ;
int n , m ;

int dx[8] = {-1 , -1 , 0 , 1 , 1 , 1 , 0 , -1 } ;
int dy[8] = {0 , -1 , -1 , -1 , 0 , 1 , 1 , 1 } ;

int cd(int i , int j)
{
    for(int k=0 ; k<8 ; k++)
    {
        int i1 = i + dx[k] , j1 = j + dy[k] ;
        if(i1>=0 && j1>=0 && i1<n && j1<m)
        {
            if(a[i][j] <= a[i1][j1])
            {
                return 0 ;
            }
        }
    }
    return 1 ;
}

int main()
{
    scanf("%d%d", &n , &m) ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            scanf("%d", &a[i][j]) ;
        }
    }
    int dem = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(cd(i,j))
            {
                dem ++ ;
            }
        }
    }
    printf("%d", dem) ;
}