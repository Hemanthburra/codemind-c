#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    while (m){
        int a,b;
        cin>>a>>b;
        if ((a<n) || (b<n)){
            cout<<"UPLOAD ANOTHER"<<endl;
        }
        else if (a==b){
            cout<<"ACCEPTED"<<endl;
        }
        else if ((a>=n) && (b>=n)){
            cout<<"CROP IT"<<endl;
        }
        m--;
    }
}