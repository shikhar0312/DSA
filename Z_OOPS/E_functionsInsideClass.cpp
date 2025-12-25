#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int runs;

    Cricketer(string name, int runs)
    {
        this->name = name;
        this->runs = runs;
    }
};

void print(Cricketer &c)
{
    cout << "Cricketer Name : " << c.name << " Cricket runs = " << c.runs << endl;
}

int main()
{
    Cricketer p1("Virat Kohli", 25000);
    Cricketer p2("Sachin Tendulkar", 30000);

    print(p1);
    print(p2);
}