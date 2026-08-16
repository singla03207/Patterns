#include<iostream>
using namespace std;
void printp(int n){
    for (int i = 0; i < n; i++)
    {
        char s='A'+n-1;
        for (int j = 0; j<i+1; j++)
        {
            cout<<s;
            s--;
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
// input- 1 4
// output-
// D
// DC
// DCB
// DCBA
