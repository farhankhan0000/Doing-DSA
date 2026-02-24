#include <iostream>
#include <string>
using namespace std;

class employee{
    public:
    string company_name; 
    string employee_name;
    string position_name;
    int salary;
    
    employee(string a, string b, string c, int d){
        company_name = a;
        employee_name = b;
        position_name = c;
        salary = d;
    }
    void show(){
        cout<<"employee's name = "<<employee_name<<"\n";
        cout<<"company's name = "<<company_name<<"\n";
        cout<<"employee's position = "<<position_name<<"\n";
        cout<<"employee's salary = "<<salary<<endl;
    }

};

int main(){
    employee e1("Microsoft", "Rahul", "Junior Developer", 100000);
    employee e2("Gritty", "Farhan", "CEO", 10000000);
    cout<<"info  for 1st\n";
    e1.show();
    e2.show();
    return 0;
}