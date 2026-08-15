#include<iostream>
using namespace std;
void printp(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<i+1; j++)
        {
           cout<<j+1;
        }
        for (int j = 0; j <=2*(n-1-i) ; j++)
        {
            cout<<" ";
        }
        
        for (int j = i+1; j>0; j--)
        {
           cout<<j;
        }
        cout<<"\n";
    }
    
    
}
int main(){
    int s;
    cin>>s;
    for (int i = 0; i < s; i++)
    {
        int n;
        cin>>n;
        printp(n);
    }
    
}
//input- 1 5
//output--
// 1         1
// 12       21
// 123     321
// 1234   4321
// 12345 54321
