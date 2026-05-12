#include <iostream>
using namespace std;

// Function to reverse Integer

int revInt(int numInt)
{
    int ans = 0;

    while (numInt > 0 || numInt < 0)
    {
        int rem = numInt % 10;
        ans = ans * 10 + rem;
        numInt /= 10;
    }
    return ans;
}

int main()
{
    {                              // Bitwise Operators
        cout << (6 & 2) << endl;   // Bitwise AND operator
        cout << (6 | 2) << endl;   // Bitwise OR operator
        cout << (6 ^ 2) << endl;   // Bitwise XOR operator
        cout << (10 << 2) << endl; // Bitwise left-shift operator
        cout << (10 >> 1) << endl; // Bitwise right-shift operator
    }
    cout << endl;

    { // Data-Types Modifiers
        cout << sizeof(short) << endl;
        cout << sizeof(long) << endl;
        cout << sizeof(long long) << endl;
        cout << sizeof(signed) << endl;
        cout << sizeof(unsigned) << endl;
    }
    cout << endl;

    { // Questions
        {
            // Figure out how to find if a number is power of 2 without any loop
            int num;
            cout << "Enter a number: ";
            cin >> num;

            if (num > 0 && (num & (num - 1)) == 0)
            {
                cout << "Yes, It's power of two!" << endl;
            }
            else
            {
                cout << "No, It's not power of two!" << endl;
            }
        }

        {
            // Write a function to reverse an Integer n.
            int numInt;
            cout << "Enter an integer to reverse it: ";
            cin >> numInt;

            cout << revInt(numInt) << endl;
        }
    }
    return 0;
}