#include<bits/stdc++.h>
using namespace std;
int d(int n){
    int c=0,p=1;
    while (n){
        c+=n%10;
        p*=n%10;
        n=n/10;
    }
    cout<<p-c;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int c=0,p=0;
    d(n);
}