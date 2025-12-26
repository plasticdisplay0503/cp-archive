#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initializing input variables
    int n;
    cin>>n;

    vector<int> x(n);    
    for(int i=0;i<n;i++) cin>>x[i];

    // Initializing output variable
    vector<int> out={x[0]};             // Either we can start with first element
                                        // Or at the end we can add the last element

    for (int i=1;i<n;i++) {
        if (x[i]>x[i-1]) {
            for (int j=x[i-1]+1;j<=x[i];j++) out.push_back(j);          // For example x[i],x[i-1]=5,2
        } else {
            for (int j=x[i-1]-1;j>=x[i];j--) out.push_back(j);
        }
    }

    for(int y:out) cout<<y<<" ";        // Output    
    return 0;           // End
}
