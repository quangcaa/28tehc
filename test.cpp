#include<stdio.h>
#include<math.h>
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    int m , n ;
    cin >> m >> n ;
    int x = max(abs(m),abs(n));
    int ucln = 0 ;
    if(m>0 && n >0){
        for(int i = 1 ; i<=x ; i++){
            if(m%i==0 & n%i==0){
                ucln = i ;
            }
        }
    }else if(m<0 || n<0){
        m=abs(m);
        n+=abs(n);
        for(int i = 1 ; i<=x ; i++){
            if(m%i==0 & n%i==0){
                ucln = i ;
            }
        }
    }
    cout << ucln ;
    return 0;
}