#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
       if(n%i==0){
         sum=sum+i;
       }
    }

    if(n==sum){
        cout<<"its perfect number";
    }else{
        cout<<"its not a perfect number";
    }
    return 0;
}