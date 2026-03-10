#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
     int count =0;
    int temp=n;
    while(temp>0){
       int lastnumber=temp%10;
       count++;
        temp=temp/10;
    }
   
    cout<<"number of digits in the number is: "<<count;
    return 0;
}