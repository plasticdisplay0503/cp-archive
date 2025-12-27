#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> x={a,b,c};

    sort(x.begin(),x.end());
    cout<<(x[0]==x[1]?x[2]:x[0]);
    cout<<"\n";
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
