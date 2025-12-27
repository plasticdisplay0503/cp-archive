#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;              // Input Variables
    bool cond=true;        // A bool variable to check wheter `(back comma) or '(single quotes is open)

    while (getline(cin,s)){    // Takes input until required
        for (char c:s) {
            if (c=='"') {
                if (cond) cout<<"``";
                else cout<<"''";
                cond=!cond;
            } else cout<<c;
        }
        cout<<"\n";
    }
    return 0;
}

/*
Idea
Since in Ascii-table both ``(back quotes) and ''(single quotes) are taken as a single charecter
We will iterate over a string and check whether ("" Double quotes occurs)
The first one will be replaced by back-commas and other one by single quotes
*/
