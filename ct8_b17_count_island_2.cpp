#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int n , m ;
int a[100][100] ;
int dx[8] = {-1 , -1 , 0 , 1 , 1 , 1 , 0 , -1 } ;
int dy[8] = {0 , -1 , -1 , -1 , 0 , 1 , 1 , 1 } ;

void loang(int i , int j)
{
    a[i][j] = 0 ;
    for(int k=0 ; k<8 ; k++)
    {
        int i1 = i + dx[k] , j1 = j + dy[k] ;
        if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]==1)
        {
            loang(i1,j1) ;
        }
    }
    
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
            if(a[i][j]==1)
            {
                dem++ ;
                loang(i,j) ;
            }
        }
    }
    printf("%d", dem) ;
    return 0 ;
}