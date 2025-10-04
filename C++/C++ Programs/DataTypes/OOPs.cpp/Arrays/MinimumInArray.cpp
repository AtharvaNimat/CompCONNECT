#include<iostream>
#include<climits> // for INT_MAX & INT_MIN but not needed in vs_code
using namespace std;
int main(){
    int b;
    cout<<"Enter the size of array :";
    cin>>b;
    int a[b];
    for(int i=0;i<b;i++){
        cout<<"Enter the elements in ["<<i<<"] :";
        cin>>a[i];
    }
    int n = sizeof(a)/4;
    int mn = INT_MAX;
    for(int i =0;i<n;i++){
        mn = min (mn,a[i]);
}
cout<<"The manimum number in the array is :"<<mn;
}
