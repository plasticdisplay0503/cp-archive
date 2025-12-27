#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Input variables
    int n;
    cin>>n;

    long long count=0;      //Output vari 
    for (int i=0;i<n;i++) {
        long long x,y;
        cin>>x>>y;
        count=max(count,x+y);
    }
    cout<<count;        //Output
    return 0;
}

// Follow-up question
// Do the question with sides as coordinate axes and triangle is not isocseles
// 2) Now solve it for a full general case (Fully maths based solution)
