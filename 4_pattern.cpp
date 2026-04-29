#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    {
        // printing things m time in row and coloumn.
        int m = 4;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }

    {
        // printing things the number of time it itterate.
        int n = 5;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }

    {
        // printing characters from A to Z
        int o = 26;

        for (int i = 0; i < o; i++)
        {
            char ch = 'A';
            for (int j = 0; j < o; j++)
            {
                cout << ch;
                ch += 1; // it will increase +1 in a character because in reality it's passed in ASCII, so the +1 is really happening in ascii digit, for A it's 65.
            }
            cout << endl;
        }
        cout << endl;
    }

    {
        //
        int p = 5;

        for (int i = 0; i < p; i++)
        {
            for (int j = p; j > 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}