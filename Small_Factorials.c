#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,s=1;
        cin>>n;
        for (int i=n; i>=1;i--){
            s*=i;
        }
        cout<<s<<endl;
        
    }
}