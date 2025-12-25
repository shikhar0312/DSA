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

void print(Car c)

// It is pass by Value not pass by reference but we make it pass by reference using & (pointors)
{
    cout << "Car name = " << c.name << " and  Car model = " << c.model << " and Car Price(in lakhs) " << c.price << endl;
}

int main()
{
    Car c1;
    c1.name = "Supra";
    c1.model = 2018;
    c1.price = 90.4;

    print(c1);
}
