#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int rollNo;
        float marks;

    public:
         void getData(){
            cout<<" Enter Name: ";
            cin>>name;
            cout<<" Enter roll no: ";
            cin>>rollNo;
            cout<<" Enter marks: ";
            cin>>marks;
         }

    void displayData(){
        cout<<"\nStudent Details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Marks: "<<marks<<endl;
    }


};

int main(){
    Student s1, s2;
    cout<<"Enter details of Student 1: \n";
    s1.getData();

    cout<<"Enter details of student 2: \n";
    s2.getData();

    s1.displayData();
    s2.displayData();
    return 0;
}
