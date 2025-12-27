#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // Input Variables
    int n,k;        //Constraints 50>=n>=k>=1
    string s;
    cin>>n>>k>>s;
    sort(s.begin(),s.end());      // In c++ it is possible to sort a string but not in python

    // cout<<s<<"\n";                                //Debugging

    // Helping variables
    int count=1,weight=((int)s[0]-96);      // For minimum weight we will always include first char of sorted s
    char curr=s[0];      // Variable to store last added char to weight

    // cout<<count<<" "<<weight<<" "<<curr<<"\n";                 // Debugging

    for (int i=1;i<n;i++) {
        if (count==k) break;    // If we have already counted k-charecters then we are already done
        else if ((int)s[i]-(int)curr>=2) {
            count++;
            weight+=((int)s[i]-96);      // -96 as we are using ascii vales and for 'a' it is 97
            // cout<<count<<" "<<weight<<" "<<curr<<"\n";         // Debugging
            curr=s[i];
        }
    }

    cout<<(count==k?weight:-1);    // If we were not able to find k-char by end of string we will output -1

    return 0;
}


/*
Follow-up Question
Without knowing the value of k
Maximize the value of k
Output the minimum weight*/
