#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<pair<int,string>> x;
    for (int i=0;i<n;i++) {
        string a;
        int b;
        cin>>a>>b;
        x.push_back({b,a});
    }


    sort(x.begin(),x.end());
    cout<<x[n-2].second;
    return 0;
}
