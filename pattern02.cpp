/*

*****
*   *
*   *
*   *
*****

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        if (count == 0 || count == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
                // continue;
            }
            count++;
        }
        else
        {

            cout << "*";
            for (int j = 0; j < (n - 2); j++)
            {
                cout << " ";
            }
            cout << "*";
            count++;
        }
    }
}

int main()
{
    int x;
    cout << "Enter the number of rows : ";
    cin >> x;
    pattern(x);
}