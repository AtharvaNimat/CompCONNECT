#include<iostream>
using namespace std;
 int main(){
    int n1;
    cout<<"Enter Number : ";
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
    if(op == '+') cout<<n1+n2<<endl;
    else if(op == '-') cout<<n1-n2<<endl;
    else if(op == '*') cout<<n1*n2<<endl;
    else if(op == '/') cout<<n1/n2<<endl;
    else if(op == '%') cout<<n1%n2<<endl;
    else cout<<"Invalid operator"<<endl;
 }
