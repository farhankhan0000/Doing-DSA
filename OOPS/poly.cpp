#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout<<"Non Parameterized Constructor";
    }

    Student(string name){
        this->name = name;
        cout<<"Parameterized Constructor";
    }
};

int main(){
    Student s1("Farhan Khan");
    return 0;
}