#include <iostream>
using namespace std;

int main()
{
    // for loop, while loop, do while loop
    // Nested loops

    // int n = 3;
    int n;
    cout << "No of lines: ";
    cin >> n;

    // int m;
    // cout << "No of stars: ";
    // cin >> m;

    for (int i = 1; i <= n; i++)
    {
        int m = i;
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}