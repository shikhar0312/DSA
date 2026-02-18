#include <iostream>
#include <string>
using namespace std;

// Class -> It is blueprint of properties of an object
// Object ->Vraibles/objects Based on that blueprint

class Car
{
public:
    string name;
    int model;
    float price;
};

int main()
{
    Car c1;
    c1.name = "Supra";
    c1.model = 2018;
    c1.price = 90.4;

    Car c2;
    c2.name = "Scorpio";

    cout
        << "Car name = " << c1.name << " and  Car model = " << c1.model << endl;
}
