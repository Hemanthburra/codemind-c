#include<bits/stdc++.h>
using namespace std;
int happy(int n){
    int d=0,s=0;
    while (n>0){
        d=n%10;
        s+=(int)pow(d,2);
        n=n/10;
    }
    return s;
}
int main(){
    int n,k=0,cnt=0;
    cin>>n;
    while (n>9){
        n=happy(n);
        if (n==1) {
            cout<<"True";
            cnt=1;
            break;
        }
    }
    if (cnt==0){
        cout<<"False";
    }
}
