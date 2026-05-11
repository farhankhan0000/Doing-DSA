#include <iostream>
#include <string>
using  namespace std;

class Student{
public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    
    ~Student(){
        cout<<"Hi, I delete everything"<<endl;
        delete cgpaptr;
    }
    

    void getInfo(){
        cout<<"name = "<<name<<endl;
        cout<<"cgpa = "<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("Farhan", 8.9);
    s1.getInfo();
    return 0;
}

