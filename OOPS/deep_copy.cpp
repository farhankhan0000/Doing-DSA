#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    double *cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    // Student(Student &obj){ //Shallow Copy 
    //     this->name = obj.name;
    //     this->cgpaptr = obj.cgpaptr;
    // }
    Student(Student &obj){
        this->name = obj.name;
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaptr<<endl;
    }
};



int main(){
    Student s1("Rahul Kumar", 8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaptr) = 9.2;
    s1.getInfo();
    return 0;
}