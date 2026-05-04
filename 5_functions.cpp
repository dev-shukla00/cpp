#include <iostream>
using namespace std;

// function definitons

string cosmos()
{
    string cosmos = "Hello, Cosmos!";
    cout << cosmos << endl;
    return cosmos;
}

int minOfTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int sumN(int n)
{
    int sumN = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i < n)

        {

            cout << "+";
        }
        else
        {
            cout << " = ";
        }
        sumN += i;
    }
    return sumN;
}

int factN(int n)
{
    int factN = 1;

    for (int i = 1; i <= n; i++)
    {
        cout << i;

        if (i < n)
        {
            cout << "*";
        }

        factN *= i;
    }
    cout << " = ";
    return factN;
}

int sumOfDigits(int num)
{
    // 1:find digit 2: sum of digit

    int sumDig = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        sumDig += lastDig;
        num /= 10;
    }
    return sumDig;
}

int main()
{
    { // learning function concepts
        // hello cosmos function
        cosmos();

        // printing min of two numbers
        cout << minOfTwo(7, 4) << endl;
    }

    { // Practice Question

        // sum of numbers from 1 to N
        cout << sumN(4) << endl;

        // factorial of n
        cout << factN(7) << endl;

        // calculate sum of digits of a number
        int n;
        cout << "Give a number: ";
        cin >> n;
        cout << "Sum of Digits: " << sumOfDigits(n) << endl;
    }

    return 0;
}