#include <iostream>
using namespace std;
void printp(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - 1 - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    int s;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        int n;
        cin >> n;
        printp(n);
    }
}
// input- 1 10
// output--
// *                  *
// **                **
// ***              ***
// ****            ****
// *****          *****
// ******        ******
// *******      *******
// ********    ********
// *********  *********
// ********************
// *********  *********
// ********    ********
// *******      *******
// ******        ******
// *****          *****
// ****            ****
// ***              ***
// **                **
// *                  *
