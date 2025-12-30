// Problem Link--> https://www.codechef.com/problems/CHEFBAKES77

// Complexity -> Time- O(1) per test case
// Idea //
/*
The maximum number of cakes a truck can carry is floor(y/x)  // Given y>=x so every truck will carry atleast one cake
The number of trucks required will be ceil(n/z) where z is floor(y/x)
In C++ int-division of y/x will directly give floor(y/x) but in python we have to use y//x
To calculate ceil(n/z) = (n+z-1)/z 
*/

// Code -->
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Added just to make the code faster
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    // Input Variables
    int n,x,y;
    cin>>n>>x>>y;
    int z=y/x;

    // Code idea
    cout<<(n+(z-1))/z;
    return 0;
}
