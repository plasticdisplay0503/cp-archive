#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Input Variables
    int n,k;
    cin>>n>>k;

    vector<int> a(n);

    //Helper variable
    vector<int> x(101,0);        // Stores occurenece of each (viables as n<=100)
    
    for (int i=0;i<n;i++) {
        cin>>a[i];
        x[a[i]]++;
    }

    sort(x.begin(),x.end());
    int d=x[100];               // maximum number of vessel available of one type
    // cout<<"d:"<<d<<"\n";        // Debug

    int s=(d+k-1)/k*k;            // Ceil of d/k *k is max number of dishes serves
    // cout<<"s:"<<s<<"\n";        // Debug

    int count=0;                //Output Variable
    for (int  i :x) {
        if (i==0) continue;
        count+=(s-i);
    }
    cout<<count;
    return 0;
}
