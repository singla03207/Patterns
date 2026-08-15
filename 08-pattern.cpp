#include<iostream>
using namespace std;
void printp(int n){
    
    for (int i = 0; i < n; i++)
    {
        char s='A';
       for (int j =n-i; j >0; j--)
       {
        cout<<s;
        s++;
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
    return 0;
}
// input- 1 5
// output--
// ABCDE
// ABCD
// ABC
// AB
// A
