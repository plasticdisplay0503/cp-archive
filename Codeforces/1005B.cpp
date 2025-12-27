#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,t;
    cin>>s>>t;
    
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    
    int count=0,x=min(s.size(),t.size());

    for (int i=0;i<x;i++) {
        if (s[i]==t[i]) count++;
        else break;
    }

    cout<<s.size()+t.size()-2*count;
    return 0;
}
