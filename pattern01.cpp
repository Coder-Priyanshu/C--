/*


**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


*/

#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int l = n - i; l > 0; l--)
        {
            cout << "*";
        }
    }
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < a; b++)
        {
            cout << "*";
        }
        for (int c = n - a; c > 0; c--)
        {
            cout << "  ";
        }
        for (int d = 0; d < a; d++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    int x;
    cout << "\nEnter the number of rows :: ";
    cin >> x;
    pattern(x);
}