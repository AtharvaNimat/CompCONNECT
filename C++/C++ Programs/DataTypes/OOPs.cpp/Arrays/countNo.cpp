#include<iostream>
using namespace std;
int main(){
    int n,x;
    int count = 0;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter target :";
    cin>>x;
    int a[n];
    for(int i =0;i<n;i++){
        cout<<"Enter the elements :";
        cin>>a[i];
    }
for(int i = 0; i<n; i++){
    if(a[i] > x){
        count++;
    }
}
cout<<"The number of elements greater than "<<x<<" is :"<<count<<endl;
return 0;
}
