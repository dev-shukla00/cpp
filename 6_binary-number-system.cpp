#include <iostream>
using namespace std;

// Decimal To binary
int decToBin(int decNum)
{

    int ans = 0;
    int power = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * power);
        power *= 10;
    }
    return ans;
}

int powOfTwo(int numPower)
{

    int ans = 1;

    while (numPower > 0)
    {
        for (int i = 0; i < numPower; i++)
        {
            ans *= 2;
        }
        break;
    }
    return ans;
}

int main()
{
    { // Decimal to Binary
        int decNum;
        cout << "Enter a number: ";
        cin >> decNum;

        cout << decToBin(decNum) << endl;
        cout << endl;
    }

    { // Power of two
        int numPower;

        cout << "Enter power of two: ";
        cin >> numPower;

        cout << powOfTwo(numPower) << endl;
    }
    return 0;
}