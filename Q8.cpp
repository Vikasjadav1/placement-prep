#include <bits/stdc++.h>
using namespace std;

int gcd1(int a, int b){
     while(a>0 && b>0){
           if(a>b){
            a=a%b;
           }
           else{
            b=b%a;
           }

           if(a==0){
            return b;
           }
           else if(b==0){
            return a;
           }
        }
}

int main(){
     int a,b;
     cout<<"enter a and b";
        cin>>a>>b;
      
        int gcd = gcd1(a,b);
        cout<<"lcm of a and b : "<<(a*b)/gcd;
    return 0;
}