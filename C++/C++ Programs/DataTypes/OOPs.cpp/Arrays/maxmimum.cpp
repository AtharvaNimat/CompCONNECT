#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter the size of array :";
    cin>>b;
    int a[b];
    for(int i=0;i<b;i++){
        cout<<"Enter the elements :";
        cin>>a[i];
    }
    int n = sizeof(a)/4;
    int mx = INT_MIN;
    for(int i =0;i<n;i++){
        mx = max (mx,a[i]);
}
cout<<"The maximum number in the array is :"<<mx;
}