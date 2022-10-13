#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=n*n;
    if (n!=0 and c%9==0 and n==9){
        cout<<"Neon Number";
    }
    else if (n==0){
        cout<<"Not Neon Number";
    }
    else if (n==c%9) cout<<"Neon Number";
    else cout<<"Not Neon Number";
}