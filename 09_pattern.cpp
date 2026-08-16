#include <iostream>
using namespace std;
void printp(int n)
{

    for (int i = 0; i < n; i++)
    {
        char s = 'A';
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (j > i)
            {

                if (j == i + 1)
                {
                    --s;
                }
                --s;

                cout << s;
            }
            else
            {
                cout << s;
                ++s;
            }
        }
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
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
// input-- 1 5
// output--
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA
