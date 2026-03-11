#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int A=1;
        for(int j=n;j>=i;j--){
            cout<<A<<" ";
           A++;
        }
        
        cout<<endl;
    }
    return 0;
}