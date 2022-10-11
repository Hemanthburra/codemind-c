#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //cout<<n;
    int d,s=0,cnt=0,val=0;
    while (n>0){
        d=n%10;
        s=(s*10)+d;
        n=n/10;
        cnt++;
    }
    cout<<s;
}