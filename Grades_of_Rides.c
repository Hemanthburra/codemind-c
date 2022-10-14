#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,s,se;
    cin>>h>>s>>se;
    if (h>50 && s>60 && se>100) cout<<10<<endl;
    else if (h>50 && s>60 ) cout<<9<<endl;
    else if (s>60 && se>100) cout<<8<<endl;
    else if (h>50 && se>100) cout<<7<<endl;
    else if (h>50 or s>60 or se>100)cout<<6<<endl;
    else cout<<5<<endl;

}