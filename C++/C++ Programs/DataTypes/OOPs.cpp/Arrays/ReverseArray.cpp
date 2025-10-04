#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50};
    int n = sizeof(a)/4;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int i = 0,j = n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
