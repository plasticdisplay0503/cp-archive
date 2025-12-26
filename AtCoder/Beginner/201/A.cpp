#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;

    int a1=min(a,(min(b,c))),a3=max(a,max(b,c)),a2=a+b+c-a1-a3;

    cout<<(a3-a2==a2-a1 ? "Yes":"No");
    return 0;
}
