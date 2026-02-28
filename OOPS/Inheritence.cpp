#include <iostream>
#include <string>
using namespace std;

class Animal{
    public: 
    string animal_name;
    string animal_type;
    string animal_vores;

    Animal(string a, string b, string c){
        animal_name = a;
        animal_type = b;
        animal_vores = c;
    }

    void show(){
        cout<<"animal name = "<<animal_name<<endl;
        cout<<"animal type = "<<animal_type<<endl;
        cout<<"animal vores = "<<animal_vores<<endl;
    }
};

class Dog : public Animal{
    public: 
    string breed;
    string colour;
    int age;
    string pet_name;

    Dog(string a, string b, string c, string d, string e, int f, string g)
        : Animal(a, b, c)

    {
        breed = d;
        colour = e;
        age = f;
        pet_name = g;
    }

    void show(){
        Animal::show();
        cout<<"breed = "<<breed<<endl;
        cout<<"colour = "<<colour<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"pet name = "<<pet_name<<endl;
    }
};

int main(){
    Animal a1("Tiger", "Wild", "Carnivore");
    Dog d1("Dog", "Domestic", "Omnivores", "Labrador", "Yellow", 6, "Tommy");

    a1.show();
    d1.show();

    return 0;
}

