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

    for (int i = 0; i < numPower; i++)
    {
        ans *= 2;
    }
    return ans;
}

int binToDec(int binNum)
{
    int pow = 1;
    int ans = 0;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;
        pow *= 2;

        binNum = binNum / 10;
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

    { // Binary to decimal
        int binNUm;
        cout << "Enter a binary number: ";
        cin >> binNUm;

        cout << binToDec(binNUm) << endl;
    }

    return 0;
}