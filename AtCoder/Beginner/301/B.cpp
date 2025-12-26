#include <bits/stdc++.h>
using namespace std;


// Using a function to return a list that gives
// 27 elements list such that a-z is 0-25 index and last one is for @
vector<int> helper(string x) {
    vector<int> z(27,0);                                   
    for (int i=0;i<x.size();i++) {
        // Reason for using 97 is that ascii value of 'a' is 97
        // -97 instead of -96 as vector<int> z is 0-indexed
        //Constraint- All the letters are lowercase english-alphabets

        if (int(char(x[i]))>=97) z[int(char(x[i]))-97]++;

        // If x[i] is not between a-z then it will be @ (constraints)
        // Ascii value of @ is 64 
        else z[26]++;
    }

    return z;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s,t;
    cin>>s>>t;                                                  // Input

    vector<int> s1=helper(s),t1=helper(t);                      // s1,t1 are storing occurence of each letter
    vector<int> x={0,19,2,14,3,4,17};                           // Position of occurenece of atcoder

    // for (int i:s1) cout<<i<<" ";                             // Debugging hints
    // cout<<"\n";
    // for (int j:t1) cout<<j<<" ";                             // Debugging hints
    // cout<<"\n";

    int count=0;
    for (int i=0;i<26;i++) {
        if (find(x.begin(),x.end(),i)==x.end()) {
            if (s1[i]!=t1[i]) {
                // cout<<i<<char(i+97)<<"gay";                      // Debugging hints
                // If there is a difference other than atcoder
                // Condition is not possible
                cout<<"No";
                return 0;
            }
        } 
    }

    for (int i:x) {
        // printf("sex%d",i);                                       // Debugging hints
        // cout<<s1[i]<<" "<<t1[i]<<"\n";                           // Debugging hints
        // Using abs as we only care about number of difference of atcoder
        count+=abs(s1[i]-t1[i]);
    }

    // cout<<count<<" "<<s1[26]+t1[26]<<"\n";                       // Debugging hints

    cout<<(count<=(s1[26]+t1[26]) ? "Yes":"No");
    return 0;
}
