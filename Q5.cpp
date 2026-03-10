#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int lastnumber=0;
    int reverse=0;
    while(n>0){
        lastnumber=n%10;
        reverse=reverse*10+lastnumber;
        n=n/10;
    }
    cout<<"reverse of the number is: "<<reverse;

    return 0;
}