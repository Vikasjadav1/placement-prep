#include <bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }

    return n*fac(n-1);
}


int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    // int ans=1;
    // for(int i=1;i<=n;i++){
    //    ans*=i;
    // }
    // cout<<"factorial of "<<n<<" is "<<ans<<endl;
    cout<<fac(n);
    return 0;
}