#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

};

class Student: public Person{
public:
    int rollNo;

};

class GradStudent: public Student{
    public:
        string researchArea;

};

int main(){
    GradStudent s1;
    s1.name = "Farhan Khan";
    s1.researchArea = "LLM";
    s1.age = 20;
    cout<<"name: "<<s1.name<<endl;
    cout<<"research area : "<<s1.researchArea<<endl;
    cout<<"age : "<<s1.age<<endl;
}