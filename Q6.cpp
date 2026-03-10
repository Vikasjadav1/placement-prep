#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
  
    int lastnumber=0;
    int ans=0;

    int temp=n;
    while(temp>0){
        lastnumber=temp%10;
        ans=ans+lastnumber*lastnumber*lastnumber;
        temp=temp/10;
    }
    if(ans==n){
        cout<<n<<" is an armstrong number";
    }
    else{
        cout<<n<<" is not an armstrong number";
    }

    return 0;
}