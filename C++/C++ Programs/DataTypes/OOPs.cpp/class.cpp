#include<iostream>
using namespace std;
// creating class 
class emp{
    public:
        int age ;
        string name;
        string subject;
        //Default constructor
        public:
        emp(){
            cout<<"Default Constructor Called"<<endl; // constructor can be written many times but in different types
        }
// Parameterised constructor hamesha class ke andar hi likhte hain
    public: // parameterised constructor
    emp(string n, int a, string s){
        name = n;
        age = a;
        subject = s;
    }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Subject :"<<subject<<endl;
    }
};
int main(){
    emp e1("Atharva", 20, "C++"); // passing the values to the constructor
    e1.display(); // to print the values
    emp e2(e1); // copy constructor, it will copy the values of e1 to e2
    e2.display(); // to print the values of e2

}