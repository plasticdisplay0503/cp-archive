#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initializing input varaibles
    int n;
    string s;
    cin>>n>>s;


    int T=0;            // Variable for counting number of occurence of 'T' in S
    for (int i=0;i<n;i++) {
        if (s[i]=='T') T++;
    }

    // Not counting A as initally we are given a variable N=A+T
    int A=n-T;

    if (A!=T) cout<<(A>T ? 'A':'T');        // If there is no tie winner is one with higher score
    else cout<<(s[n-1]=='A'?'T':'A');       // If tie, then one with last one to score loses
    return 0;           // End
}
