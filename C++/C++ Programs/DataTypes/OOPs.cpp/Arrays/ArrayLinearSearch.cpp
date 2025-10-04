#include<iostream>
using namespace std;
bool linearsearch(int arr[][2], int rows, int cols, int key){ // rows nhi likha toh bhi chalega lekin cols likhna padega
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[2][2] ;
    int rows = 2, cols = 2;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the element to be searched: ";
    int n;
    cin>>n;
    
    cout<< linearsearch(arr, rows, cols, n)<< endl;
    cout<<"here is the key at position :"<<endl;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(arr[i][j] == n){
                cout<<"["<<i<<"]["<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}