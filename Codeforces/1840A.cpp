#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin>>n>>s;

    cout<<s[0];
    char curr=s[0];
    for (int i=1;i<n-1;i++) {
        if (s[i]==curr) {
            curr=s[i+1];
            // cout<<"curr:"<<curr<<"\n";
            cout<<s[i+1];
            i++;
        }
    }
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
