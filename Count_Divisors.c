#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k,cnt=0;
    cin>>a>>b>>k;
    for (int i=a;i<=b;i++){
        if (i%k==0){
            cnt++;
        }
    }
    cout<<cnt;
}