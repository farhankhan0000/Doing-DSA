#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //Properties
    private:
       double salary;
    
    public:
        string name;
        string dept;
        string subject;
        //Parameterized
        Teacher(string name, string dept, string subject, double salary){
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }
        
        //CopyConstructor
        Teacher(Teacher &obj){//Pass by reference
            cout<<"I am custom copy constructor\n";
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
            
        }

        void ChangeDept(string newDept){
            dept = newDept;
        }

        void getInfo(){
            cout<<"name : "<<name<<endl;
            cout<<"deptartment : "<<dept<<endl;
        }
};

int main(){
    Teacher t1("Farhan", "Compute Science",  "C++", 250000);
    //t1.getInfo();

    Teacher t2(t1); // Custom Copy Constructor
    t2.getInfo();
    return 0;
}