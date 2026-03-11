#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int A=1;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<A<<" ";
           
        }
        cout<<endl;
    }
    return 0;
}