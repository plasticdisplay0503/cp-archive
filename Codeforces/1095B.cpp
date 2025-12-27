#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> x(n);
    for(int i=0;i<n;i++) cin>>x[i];

    sort(x.begin(),x.end());

    cout<<min(x[n-1]-x[1],x[n-2]-x[0]);
    return 0;
}
