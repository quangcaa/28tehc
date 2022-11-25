#include<stdio.h>
#include<math.h>

//SAP XEP CHON : Selection sort
//O(N^2)
//Tu tuong : o moi buoc se dua phan tu nho nhat chua duoc sap xep ve dau day

int a[100000] ;

void selectionSort(int a[], int n)
{
    //buoc i : chon phan tu nho nhat chua dc sap xep va hoan vi voi a[i]
    for(int i=0 ; i<n-1 ; i++)
    {
        //di tim phan tu nho nhat chua duoc sap xep
        int min_pos = i ; //ban dau coi i la nho nhat 
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j] < a[min_pos])
            {
                min_pos = j ;
            }
        }
        //doi cho a[i] , a[min_pos] 
        int tmp = a[i] ; 
        a[i] = a[min_pos] ; 
        a[min_pos] = tmp ;
    }
}


//SAP XEP NOI BOT : Bubble sort
//O(N^2)
//Tu tuong : O moi buoc se dua phan tu lon nhat chua dc sap xep noi ve cuoi day

void bubbleSort(int a[] , int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        //duyet tu chi so j=0 -> n-i-2 
        for(int j=0 ; j<n-i-1 ; j++)
        {
            //so sanh gtri cua 2 ptu canh nhau ; a[j] , a[j+1]
            if(a[j] > a[j+1])
            {
                int tmp = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = tmp ;
            }
        }
    }
}


//SAP XEP CHEN : Insretion sort
//O(N^2)
//Tu tuong : O moi buoc se chen ptu dang xet vao day cvac ptu da duoc sap xep trc do

void insertionSort(int a[] , int n )
{
    for(int i=1 ; i<n ; i++)
    {
        //chen ptu a[i] vao doan [0 , i-1] sao cho van tao thanh day tang dan
        int pos = i-1 , value = a[i] ;
        while(pos >= 0 && value < a[pos])
        {
            a[pos+1] = a[pos] ;
            --pos ;
        }
        a[pos+1] = value ;
    }
}


//SEP XEP DEM PHAN PHOI : Counting sort
//O(N + K)
//Tu tuong : dem xem moi gia tri xuat hien bnh lan , sau do in tu be den lon 
//Dieu kien : khai bao dc 1 mang dem co co la K+1 , K : ptu lon nhat trong mang && Cac ptu ko dc am


int cnt[10000001] = {0} ;
void countingSort(int a[] , int n)
{
    int K = -1e9 ;
    for(int i=0 ; i<n ; i++)
    {
        K = fmax(K, a[i]) ;
    }
    for(int i=0 ; i<n ; i++)
    {
        cnt[a[i]]++ ;
    }
    for(int i=0 ; i <= K ; i++)
    {
        for(int j=0 ; j<cnt[i] ; j++)
        {
            printf("%d ", i ) ;
        }
    }
}


//SAP XEP NHANH : Quick sort
//do phuc tap : O(NlogN)
//HAM PHAN HOACH LOMUTO : tra ve chi so cua khoa (pivot)
int partition(int a[] , int l , int r)
{
    int i = l-1 , pivot = a[r] ;
    for(int j=l ; j<r ; j++)
    {
        //neu a[j] > pivot : bo qua
        if(a[j] <= pivot)
        {
            //dua a[j] len dau
            ++i;
            int tmp = a[i] ; a[i] = a[j] ; a[j] = tmp ;
        }
    }
    ++i;
    int tmp = a[i] ; a[i] = a[r] ; a[r] = tmp ;
    return i ;
}

void quickSort(int a[] , int l , int r)
{
    if(l<r)
    {
        int pos = partition(a,l,r);
        //xet de quy ve day ben trai
        quickSort(a , l , pos-1) ;
        quickSort(a, pos+1 , r) ;

    }
}

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    quickSort(a, 0 , n-1) ;
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ", &a[i]) ;
    }
}



//SAP XEP TRON : Merge sort
//Do phuc tap : O(NlogN) 

//merge : tron cac ptu tu chi so left -> mid va cac ptu mid+1 -> right 
// thanh cac ptu tang dan

void merge(int a[] , int l , int m , int r)
{
    //tam thoi luu cac ptu chi so l -> m vao 1 mang && cac ptu chi so m+1 -> r vao 1 mang
    int n1 = m-l+1 , n2 = r-m ;
    int x[10000] , y[10000] ; // thuc ra la int x[n1] , y[n2]  (( nhung vsc bi danh loi nen vt ntn))
    //dua cac ptu tu chi so l->m vao mang x 
    for(int i=0 ; i<n1 ; i++)
    {
        x[i] = a[l+i] ;
    }
    //dua cac ptu tu chi so m+1->r vao mang y
    for(int i=0 ; i<n2 ; i++)
    {
        y[i] = a[m+i+1] ;
    }
    //tron 2 mang x , y -> gan lai cho mang a[l , r] 
    int index = l ;
    int i=0 , j=0 ;
    while(i<n1 && j<n2)
    {
        if(x[i] <= y[j])
        {
            a[index++] = x[i++] ;
        }
        else
        {
            a[index++] = y[j++] ;
        }
    }
    while(i<n1)
    {
        a[index++] = x[i++] ;
    }
    while(j<n2)
    {
        a[index++] = y[j++] ;
    }
}

void mergeSort(int a[] , int l , int r)
{
    if(l<r)
    {
        int m = (l+r)/2 ;
        mergeSort(a,l,m) ; // goi dequy nua trai
        mergeSort(a,m+1,r) ; // goi dequy nua phai
        merge(a, l , m , r) ;
    }
}

int main()
{
    int n ; scanf("%d", &n) ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]) ;
    }
    mergeSort(a, 0 , n-1) ;
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ", a[i]) ;
    }
}