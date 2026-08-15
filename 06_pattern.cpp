#include <iostream>
using namespace std;
void printp(int n)
{
    int s = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << s << " ";
            s++;
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
  return 0;
}


// input-- 1 6
// output--  

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21 
