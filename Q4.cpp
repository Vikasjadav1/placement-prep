#include <bits/stdc++.h>
using namespace std;


fibonacci(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int a=0;
    int b=1;
    
    // for(int i=0;i<5;i++){
    //     int c=a+b;
    //     a=b;
    //     b=c;
        
    //     cout<<c<<" ";
    // }

    cout<<fibonacci(5);
    return 0;
}