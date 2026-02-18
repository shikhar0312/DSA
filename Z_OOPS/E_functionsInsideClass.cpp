#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    //  Function inside class
    void print()
    {
        cout << "Cricketer Name : " << name << " Cricket runs = " << runs << endl;
    }
    int matches()
    {
        return runs / avg;
    }
};

int main()
{
    Cricketer p1("Virat Kohli", 25000, 57.6);
    Cricketer p2("Sachin Tendulkar", 30000, 67.5);

    p1.print();

    int match = p1.matches();
    cout << match << endl;
}