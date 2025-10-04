#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
};
class teacher {
    public:
    float marks;
    double salary;
};
class TA : public student , public teacher{
    public:
        string research;
    void getdata(){ // function
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter salary :";
        cin>>salary;
        cout<<"Enter age :";
        cin>>age;
    }
    void display(){ // function bhi bolte hai isse
        cout<<"Name :"<<name<<endl;
        cout<<"Salary :"<<salary<<endl;
        cout<<"Age :"<<age;
    }
};
int main (){
    // TA t1;
    // t1.name = "tony starks";
    // t1.salary = 12345.678;
    // t1.age = 25;
    // cout<<t1.name<<endl;
    // cout<<t1.salary<<endl;
    // cout<<t1.age<<endl;
    TA t1;
    t1.getdata();
    t1.display();

}