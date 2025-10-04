#include<iostream>
using namespace std;
class student{
public:
    string name;
    int age;
    string subject;
    
// construtor
public:
    student(){
        cout<<"Default Constructor Called"<<endl;  
    }    

    void get(){
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter Age :";
        cin>>age;
        cout<<"Enter Subject :";
        cin>>subject;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Subject : "<<subject<<endl;
    }
};
class emp : public student{
    public:
    int sal;
    int dob;

    void getemp(){
        cout<<"Enter Salary :";
        cin>>sal;
        cout<<"Enter Date of Birth :";
        cin>>dob;
    }
    void displayemp(){
        cout<<"Salary : "<<sal<<endl;
        cout<<"Date of Birth : "<<dob<<endl;
    }
};
int main(){
    emp e1;
    e1.get();
    e1.getemp();
    e1.display();
    e1.displayemp();
}
