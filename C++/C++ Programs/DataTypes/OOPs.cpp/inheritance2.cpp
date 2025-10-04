#include<iostream>
using namespace std;
class person{ // 1st class 
    public:
    string name;
    int age;
};
class student : public person { // 2nd class multilevel inheritance
    public:
    int percent;
};
class gradstudent : public student{ // 3rd class
    public:
    string research;
};
int main(){
    gradstudent s1;
    s1.name = "Atharva Nimat";
    s1.research = "quantum physics";
    cout<<s1.name<<endl;
    cout<<s1.research<<endl;

}