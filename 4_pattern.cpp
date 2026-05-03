#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    { // Sqaure pattern questions
        {
            // square pattern: printing star n time in row and coloumn.
            int n = 4;

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            cout << endl;
        }

        {
            // square pattern: from A to n times in row and coloumn.
            int n = 5;

            for (int i = 0; i < n; i++)
            {
                char ch = 'A';
                for (int j = 0; j < n; j++)
                {
                    cout << ch << " ";
                    ch += 1; // it will increase +1 in a character because in reality it's passed in ASCII, so the +1 is really happening in ascii digit, for A it's 65.
                }
                cout << endl;
            }
            cout << endl;
        }
        {
            // square pattern: printing number in continuous manner irrespective of column and row.
            int n = 5;
            int num = 1;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << num << " ";
                    num++;
                }
                cout << endl;
            }
            cout << endl;
        }
        {
            // square pattern: printing character in continuous manner irrespective of column and row.
            int n = 5;
            char num = 'A';

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << num << " ";
                    num++;
                }
                cout << endl;
            }
            cout << endl;
        }
    }

    { // Triangle pattern
        {
            // right angle triangle pattern
            int n = 5;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            cout << endl;
        }
        {
            // right angle triangle pattern with number
            int n = 5;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    cout << i + 1;
                }
                cout << endl;
            }
            cout << endl;
        }
        {
            // right angle triangle pattern with character
            int n = 5;
            char ch = 'A';

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    cout << ch;
                }
                ch++;
                cout << endl;
            }
            cout << endl;
        }
        {
            {
                // right angle triangle pattern with number but in increasing manner in row and not in column.
                int n = 5;

                for (int i = 0; i < n; i++)
                {
                    for (int j = 1; j <= i + 1; j++)
                    {
                        cout << j;
                    }
                    cout << endl;
                }
                cout << endl;
            }
            {
                // or we can also do it like this. (this was my own logic and preivous one was apna college logic)
                int n = 5;

                for (int i = 0; i < n; i++)
                {
                    int num = 0;
                    for (int j = 0; j < i + 1; j++)
                    {
                        cout << num + 1;
                        num++;
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
        {
            // Reverse triangle loop
            int n = 5;

            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j > 0; j--)
                {
                    cout << j;
                }
                cout << endl;
            }
            cout << endl;
        }
        {
            // Floyd's triangle pattern
            {
                // Floyd's traingle with numbers
                int n = 4;
                int num = 1;

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        cout << num << " ";
                        num++;
                    }
                    cout << endl;
                }
                cout << endl;
            }
            {
                // Floyd's triangle with characters
                int n = 4;
                char ch = 'A';

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        cout << ch << " ";
                        ch++;
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
        {
            {
                // Inverted spaced right angle triangle with numbers
                int n = 4;

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < i; j++)
                    {
                        cout << " ";
                    }

                    for (int j = 0; j < n - i; j++)
                    {
                        cout << i + 1;
                    }
                    cout << endl;
                }
                cout << endl;
            }
            {
                // Inverted spaced right angle triangle with characters
                int n = 4;
                char ch = 'A';

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < i; j++)
                    {
                        cout << " ";
                    }
                    for (int j = 0; j < n - i; j++)
                    {
                        cout << ch;
                    }
                    ch++;
                    cout << endl;
                }
                cout << endl;
            }
        }
    }
    {
        // Pyramid pattern
        {
            int n = 4;
            int num2 = 1;

            for (int i = 0; i < n; i++)
            {
                // spaces
                for (int j = 0; j < (n - 1 - i); j++)
                {
                    cout << " ";
                }

                // num1
                int num1 = 1;
                for (int j = 0; j < i + 1; j++)
                {
                    cout << num1;
                    num1++;
                }

                // num2
                for (int j = 0; j < i; j++)
                {
                    cout << num2;
                    num2++;
                }

                cout << endl;
            }
            cout << endl;
        }
    }
    {
        // Hollow diamond pattern
        {
            int n = 4;

            // upper loop
            for (int i = 0; i < n; i++)
            {
                // inner loop for upper left initial spaces
                for (int j = 0; j < n - 1 - i; j++)
                {
                    cout << " ";
                }

                // condition statement and innner loop for upper right
                if (i != 0)
                {
                    cout << "*";

                    for (int j = 0; j < 2 * i - 1; j++)
                    {
                        cout << " ";
                    }
                }

                cout << "*";
                cout << endl;
            }

            // Lower loop
            {
                for (int i = 0; i < n - 1; i++)
                {
                    // initial spaces
                    for (int j = 0; j < i + 1; j++)
                    {
                        cout << " ";
                    }
                    // initial stars
                    cout << "*";

                    // lateral stars
                    if (i != n - 2)
                    {
                        for (int j = 0; j < 2 * (n - i) - 5; j++)
                        {
                            cout << " ";
                        }
                        cout << "*";
                    }

                    cout << endl;
                }
                cout << endl;
            }
        }
    }
    {
        // Butterfly pattern

        int n = 4;

        // upper patterns
        for (int i = 0; i < n; i++)
        {
            // upper initial stars
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }

            // upper inside spaces
            for (int j = 0; j < 2 * (n - 1 - i); j++)
            {
                cout << " ";
            }

            // upper end stars
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }

            cout << endl;
        }

        // lower pattern
        for (int i = 0; i < n; i++)
        {
            // lower initial stars
            for (int j = 0; j < n - i; j++)
            {
                cout << "*";
            }

            // lower inner space
            for (int j = 0; j < 2 * i; j++)
            {
                cout << " ";
            }

            // lower lateral stars
            for (int j = 0; j < n - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}