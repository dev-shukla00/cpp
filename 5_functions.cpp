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

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++) // start from 2, not 0
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrime(int n)
{
    int init = 2;

    while (init <= n)
    {
        bool isPrime = true; // reset for each number

        for (int i = 2; i < init; i++)
        {
            if (init % i == 0)
            {
                isPrime = false; // found divisor → not prime
                break;
            }
        }

        if (isPrime)
        {
            cout << init;

            if (init < n)
                cout << ", ";
        }

        init++;
    }
}

int main()
{
    { // learning function concepts
        // hello cosmos function
        cout << cosmos() << endl;

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

    { // H.W qustions

        // write a function to check if a number is prime or not.
        int n;
        cout << "Prime or not: ";
        cin >> n;

        if (isPrime(n))
        {
            cout << "Prime Number!" << endl;
        }
        else
        {
            cout << "Non-prime Number!" << endl;
        }

        // write a function to print all prime numbers from 1 to N.
        int val;
        cout << "Give a value to print all prime numbers upto that value: ";
        cin >> val;

        printPrime(val);
    }

    return 0;
}