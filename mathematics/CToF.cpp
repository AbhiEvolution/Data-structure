//Celsius To Fahrenheit 
#include <iostream>

using namespace std;

double cToF(int C)
{
    double f;
    f=C*9/5+32;
    return f;
}

int main()
{
    double c;
    cout << "\nEnter the temperature in celsius: ";
    cin >> c;
    cout << "\nTemperature in Fahrenheit is: " << cToF(c)<<endl;
}