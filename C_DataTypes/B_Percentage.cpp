#include <iostream>
using namespace std;
int main()
{
    double mathsmarks = 55;
    double englishmarks = 49;
    double chemmarks = 58;
    double compmarks = 52;
    double marksobtained = (mathsmarks + englishmarks + chemmarks + compmarks);
    double totalmarks = 4 * 60;
    double percentage = (marksobtained / totalmarks) * 100;
    cout << "The percentage is " << percentage << endl;
}