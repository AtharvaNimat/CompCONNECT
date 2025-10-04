#include<iostream>
using namespace std;
int main(){
    // initializing array size
    int n;
    cout<<"Enter a size of array :";
    cin>>n;
    int a[n];
    // initializing array values
    for(int i=0;i<=n-1;i++){
        cout<<"Enter a Number :";
        cin>>a[i];
    }
    // declaring values
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}