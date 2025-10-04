#include<iostream>
using namespace std;
 class person{
    public:
    string name;
    int age;

    person(){
        cout<<"Parent constructor "<<endl;
    }
 };
 class student : public person{
    public:
        int roll ;

    void getinfo(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter roll : ";
        cin>>roll;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;
    }
    student(){
        cout<<"child constructor"<<endl;
    }
 };
 int main(){
    student s1;
    s1.getinfo();
    s1.display();
 }