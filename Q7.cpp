#include <bits/stdc++.h>
using namespace std;

int main(){
     int a,b;
     cout<<"enter a and b";
        cin>>a>>b;

        while(a>0 && b>0){
           if(a>b){
            a=a%b;
           }
           else{
            b=b%a;
           }

           if(a==0){
            cout<<"gcd is: "<<b;
           }
           else if(b==0){
            cout<<"gcd is: "<<a;
           }
        }
    return 0;
}