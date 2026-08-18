#include<iostream>
using namespace std;
void printp(int n){
    for (int i = 0; i <2*n-1; i++)
    {
        for (int j = 0; j< 2*n-1; j++)
        {
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout<<(n-min(min(top,bottom),min(left,right)));
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
// input--1 4
// output--
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
