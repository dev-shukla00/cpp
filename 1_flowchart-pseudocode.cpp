#include <iostream>
using namespace std;

int main()
{
    // firstcode Hello Cosmos
    string name = "cosmos";
    cout << "\nHello " << name << "!\n"
         << endl;

    // area of square
    int aos;
    cout << "Enter a value to calculate area of square: ";
    cin >> aos;

    int area_of_square = aos * aos;
    cout << "Area of Square: \n"
         << area_of_square << endl;

    // sum of two numbers
    int value_one, value_two;

    cout << "\nEnter first value to calculate sum of two no: ";
    cin >> value_one;

    cout << "Enter sencond value to calculate sum of two no: ";
    cin >> value_two;

    int sum = value_one + value_two;
    cout << "Result : " << sum << endl;

    //-Homework Questions-
    // simple interest.

    return 0;
}
