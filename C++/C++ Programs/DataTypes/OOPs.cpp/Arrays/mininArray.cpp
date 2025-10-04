#include<iostream>
using namespace std;
int main(){
    int a[] = {1,23,45,67,78,89,0};
    int min = 0;int i;
    cout<<"Enter the number :";
    for(int i=0;a[i]>min;i++){
        //cout<<"Enter the elements in ["<<i<<"] :";
        cin>>a[i];
    }
    //int n = sizeof(a)/4;
    //int mx = INT_MAX;
    for(int i =0;a[i]>min;i++){
        if (a[i] < min){

            min = a[i];
        }
        else{
            cout<<a[i];
        }
}
cout<<"The maximum number in the array is :"<<min;
}