#include<iostream>
using namespace std;
class student{
    public:
    string name;
    double *cgpaPtr;

    
    student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    student(student &s){
        this->name = s.name;
        cgpaPtr =  new double;
        *cgpaPtr = *s.cgpaPtr;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaPtr<<endl;

    }
};
int main(){
    student s1("Atharva", 9.5);
    student s2(s1);
    s1.display();
    *(s2.cgpaPtr) = 9.8;
    s2.display();
    return 0;
}