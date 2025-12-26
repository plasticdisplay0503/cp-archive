#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,x,y;            // Input variables
    cin>>n>>a>>x>>y;


    // If number of cabbages are less than discount price we would directly buy them
    // Otherwise, we will buy first a at normal and then reamining at discount
    cout<<(n>=a ? a*x+(n-a)*y:n*x);
    return 0;
}
