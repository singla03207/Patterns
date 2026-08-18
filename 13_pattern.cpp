#include<iostream>
using namespace std;
void printp(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(i==0||i==n-1){
            cout<<"* ";
           }
           else{
            if(j==0||j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
           }
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
// input-- 1 5
// output--
// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 

