#include<stdio.h>
#include<math.h>
int a[100000] ;


// 1 . tim kiem tuyen tinh (linear search)
//do phuc tap : O(N) 

int linearSearch(int a[] , int n , int x )
{
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==x)
        {
            return 1 ;
        }
    }
    return 0;
}


// 2. tim kiem nhi phan (binary search)
//do phuc tap : O(logN) 

int binarySearch(int a[] , int n , int x)
{
    int left = 0 , right = n-1 ;
    while(left <= right)
    {
        int mid = (left+right) / 2 ;
        if(a[mid] == x)
        {
            return 1 ;
        }
        else if(a[mid] < x)
        {
            left = mid + 1 ;
        }
        else
        {
            right = mid - 1 ;
        }
    }
    return 0 ;
}


// 3. Vi tri dau tien trong mang tang dan 
//do phuc tap : O(LogN)

//tim chi so dtien cua ptu x trong mang a da dc sap xep , neu ko tim thay thi tra ve -1 
int first(int a[] , int n , int x)
{
    int res = -1 , l = 0 , r = n-1 ;
    while(l <= r)
    {
        int m = (l+r)/2 ;
        if(a[m] == x)
        {
            res = m ;
            //tim them o ben trai xem con x ko ?
            r = m-1 ;
        }
        else if(a[m] < x)
        {
            l = m+1 ;
        }
        else
        {
            r = m-1 ;
        }
    }
    return res ;
}


// 4. Vi tri cuoi cung cua mang tang dan ( tuong tu 3. )
//do phuc tap : O(LogN)

int last(int a[] , int n , int x)
{
    int res = -1 , l = 0 , r = n-1 ;
    while(l <= r)
    {
        int m = (l+r)/2 ;
        if(a[m] == x)
        {
            res = m ;
            //tim them o ben phai xem con x ko ?
            l = m+1 ;
        }
        else if(a[m] < x)
        {
            l = m+1 ;
        }
        else
        {
            r = m-1 ;
        }
    }
    return res ;
}


// 5. Vi tri dau tien lon hon hoac bang x trong mang tang dan 
// do phuc tap : O(LogN)

int first(int a[] , int n , int x)
{
    int res = -1 , l = 0 , r = n-1 ;
    while(l <= r)
    {
        int m = (l+r)/2 ;
        if(a[m] >= x)
        {
            res = m ;
            //tim them ben trai
            r=m-1 ;
        }
        else
        {
            l = m+1 ;
        }
    }
    return res ;
}


// 6. Vi tri cuoi cung nho hon hoac bang X trong mang tang dan 
// do phuc tap : O(LogN)

int last(int a[] , int n , int x)
{
    int res = -1 , l = 0 , r = n-1 ;
    while(l <= r)
    {
        int m = (l+r)/2 ;
        if(a[m] <= x)
        {
            res = m ;
            //tim them ben phai
            l = m+1 ;
        }
        else
        {
            r = m-1 ;
        }
    }
    return res ;
}