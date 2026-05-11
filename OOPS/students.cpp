#include <iostream>
#include <string>
using  namespace std;

class Student{
public:
    string name;
    int rollNo;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA: public Student, public Teacher{

};

int main(){
    TA s1;
    s1.name = "Khan Sahab";
    s1.subject = "Computer Science";
    cout<<s1.name<<endl;
    cout<<s1.subject<<endl;
    return 0;
}

