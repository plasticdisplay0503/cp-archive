#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Input Variables
    int n;
    string s;
    cin>>n>>s;

    if (n==1) {                 // Edge case- We don't need to colour a dog if only one dog is present
        cout<<"Yes";
        return 0;
    }

    //Helping varaibles
    vector<int> x(26,0);        // Stores occurrence of each colour using ascii intial set to 0

    for (int i=0;i<n;i++) {
        x[(int)s[i]-97]++;      
    }

    sort(x.begin(),x.end());    // To calculate the maximum of one-kind of dog present
    // If there are more than 1 dog of one type for n>=2
    // The we can start coulouring them for example abcdd
    // dd->cc  ccc->bbb bbb->aaaa
    // Here we will consider n=1 seperately

    //Output
    cout<<(x[25]>1?"Yes":"No");
    return 0;
}
