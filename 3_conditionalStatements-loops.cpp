#include <iostream>
using namespace std;

int main()
{
    // for loop, while loop, do while loop
    // // Nested loops

    // // int n = 3;
    // int n;
    // cout << "No of lines: ";
    // cin >> n;

    // // int m;
    // // cout << "No of stars: ";
    // // cin >> m;

    // for (size_t i = 1; i <= n; i++)
    // {
    //     int m = i;
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Homework Questions
    // Sum of all numbers from 1 to N which are  divisible by 3
    int sumN;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> sumN;

    for (size_t i = 1; i <= sumN; i++)
    {
        if (i % 3 == 0)
        {
            cout << i;
            if (i + 3 <= sumN)
            {
                cout << " + ";
            }
            sum += i;
        }
    }
    cout << " = " << sum << endl;

    // Print Factorial of a number N.

    int factN;
    int sumfact = 1;
    cout << "Enter a number: ";
    cin >> factN;

        for (size_t i = 1; i <= factN; i++)
        {
            cout << i;
            if (i < factN)
            {
                cout << " * ";
            }
            sumfact = sumfact * i;
        }
        cout << " = " << sumfact << endl;
    }
    return 0;
}