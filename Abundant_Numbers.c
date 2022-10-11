#include<bits/stdc++.h>
using namespace std;
int d(int n){
    int c=0;
    for(int i=1;i<=(int)sqrt(n);i++){
        if(n%i==0){
            c+=i;
            if (i!=n/i) c+=n/i;
        }
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    if (d(n)-n>n) cout<<"True";
    else cout<<"False";
}