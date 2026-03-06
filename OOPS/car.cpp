#include <iostream>
using namespace std;

class car{
    private:
    string make;
    string model;
    int year;

    public:
        car(string mk, string md, int yr){
            make = mk;
            model = md;
            year = yr;
        }
    
        int getCarAge(int currentYear){
            if (year > currentYear){
                cout<<"Invalid year";
                return -1;
            }
            return currentYear - year;
        }
};

int main(){
    string make, model;
    int year, currentyear;


    cin >> make;
    cin >> model;
    cin >> year;
    cin >> currentyear;

    car c(make, model, year);

    int age = c.getCarAge(currentyear);

    if(age != -1){
        cout<<age;
    }
    return 0;
}