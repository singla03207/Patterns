#include<iostream>
using namespace std;
void printp(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < (2*i); j++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j<n-i; j++)
        {
            cout<<"*";
        }


        cout<<"\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < (2*(n-i-1)); j++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        

        cout<<"\n";
    }
    
}
int main(){
    int s;
    cin>>s;
    for(int i=0l;i<s;i++){
        int n;
        cin>>n;
    printp(n);
}
  return 0;

}
// input-- 1 10
// output-
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
