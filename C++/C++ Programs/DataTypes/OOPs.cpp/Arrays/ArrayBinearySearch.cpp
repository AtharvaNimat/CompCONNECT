#include<iostream>
using namespace std;
int Bubb(int arr[], int n,int key)
{   
    for (int i = 0; i<n;i++){
        for(int j = 0; j<n; j++){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i];
        }
    }
    cout<<endl;
    int low = 0,high = n-1,mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            return mid; // key found
        }
        else if(arr[mid] < key){
            low = mid + 1; // search in right half
        }
        else{
            high = mid - 1; // search in left half
        }  
        return -1;
    }
}
    int main(){
        int arr[100],key,n,found;
        cout<<"Enter the number of elements in the array: ";
        cin>>n;
        cout<<"Enter the element to be searched: ";
        cin>>key;
        found = Bubb(arr, n, key);
        if(found == 1){
            cout<<"Not found "<<endl;
        }
        else{
            cout<<"Found at index: "<<found<<endl;
        }
    }
    

