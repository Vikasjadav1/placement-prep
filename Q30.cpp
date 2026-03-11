#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
           if(j<=n-i){
               cout<<" "<<" ";
           }
              else{
                cout<<"*"<<" ";
              }
        }
        cout<<endl;
    }
    return 0;
}