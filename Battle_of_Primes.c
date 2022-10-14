#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n<=1){
        return false;
    }
    else {
        for (int i=2;i<=(int)sqrt(n);i++){
            if (n%i==0) return false;
        }
    }
    return true;
}
int main(){
    int t,e,f=0;
    cin>>t;
    cin>>e;
    for (int i=1;i<=10;i++){
        f=t+e+i;
        if (prime(f)) {
            cout<<i;
            break;
        }
    }
}