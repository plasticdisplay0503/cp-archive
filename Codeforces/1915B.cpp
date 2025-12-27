#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a=0,b=0,c=0;
    string s;
    for (int i=1;i<=3;i++) {
        cin>>s;
        for (char c:s) {
            if (c=='A') a++;
            else if (c=='B') b++;
            else if (c=='C') c++;
        }
    }

    if (a!=3) cout<<"A\n";
    else if (b!=3) cout<<"B\n";
    else cout<<"C\n";
    return;
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
