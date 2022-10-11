#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0;
    cin>>n;
    //cout<<n;
    for (int i=1;i<n;i++){
        if ((n%i)==0){
            m+=i;
        }
    }
    if (m==n){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}