#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;

    int i=s.find('1');
    cout<<(i%2==0 ?"Takahashi":"Aoki");
    return 0;
}



/*
Idea
Since string is 0-indexed and Takahashi is starting the game
If 1 appears at even index Takahashi is picked 0,2,4....index so he will lose the game
Else Aoki will lose */


/*
Alternative approach
Without using builtin library

    for (int i=0;i<n;i++) {
        if (s[i]=='1') {
            cout<<(i%2==0 ?"Takahashi":"Aoki");
            return 0;
        }
    }*/
