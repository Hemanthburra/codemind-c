#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%3==0 && n%5==0 && n%7==0) cout<<"PlingPlangPlong";
    else if (n%3==0 and n%5==0) cout<<"PlingPlang";
    else if (n%3==0) cout<<"Pling";
    else if (n%7==0) cout<<"Plong";
    else if (n%5==0) cout<<"Plang";
    else cout<<n;

}