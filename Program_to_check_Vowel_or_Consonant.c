#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    char a[10]={'A', 'E', 'I', 'O', 'U','a','e','i','o','u'};
    int cnt=0;
    for (int i=0; i<=10;i++){
        if (c==a[i]){
            cnt++;
        } 
    }
    if (cnt==1) cout<<"Vowel";
    else cout<<"Consonant";
}
