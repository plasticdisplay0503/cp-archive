#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Input variables
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    //output varaibles
    vector<int> t(n);
    int count=0;

    for(int i=0;i<n;i++) {
        count+=a[i];
        t[i]=count/k;
        count%=k;
    }

    for (int x:t) cout<<x<<" ";
    return 0;
}
