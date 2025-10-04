#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,4,55,6,7,2,5,24,24};
    int n = sizeof(a)/sizeof(int);
    cout<<n;
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}