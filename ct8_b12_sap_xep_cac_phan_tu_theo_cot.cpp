#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void selectionSort(int a[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        int pos = i ; 
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j] < a[pos])
            {
                pos = j ; 
            }
        }
        int tmp = a[i] ; a[i] = a[pos] ; a[pos] = tmp ; 
    }
}

int main()
{
    int n ; scanf("%d" , &n) ;
    int a[n][n] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            scanf("%d", &a[j][i]) ;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        selectionSort(a[i], n) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ", a[j][i]) ;
        }
        printf("\n") ;
    }
}