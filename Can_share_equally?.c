#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (a%2) cout<<"NO";
   else if ((a==0) and (b%2))
    {
        cout<<"NO";
    }
    else cout<<"YES";
}