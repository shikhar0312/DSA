#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string name;
    int model;
    float price;
    // Constructor
    Car(string s, int year, float p)
    {
        name = s;
        model = year;
        price = p;
    }
    Car()
    {
        // default construtor
    }
};

int main()
{
    Car c1("Honda", 2025, 25.5);
    cout << "Car name = " << c1.name << endl;

    // We can overwrite properties of this object
    c1.name = "Hyndai";

    // After making constructor we have to make object on that
    //  There is default constructor called parameterised constructor (constructor(){ //Empty  })
    // We can make multple constructor
    // By default object contains garbage value

    cout << "Car name = " << c1.name << " and  Car model = " << c1.model << endl;

    // Copy Object

    Car c2 = c1; // It is deep copy on changing c2 will not change c1
    Car c3(c1);  // Copy constructor deep copy

    cout << "Car name = " << c2.name << " and  Car model = " << c2.model << endl;
}
