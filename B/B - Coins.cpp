// Link To Problem: https://codeforces.com/contest/47/problem/B

#include <bits/stdc++.h>

#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)
using namespace std;


int main() {
    map<char, int> mp;
    string relation;

    // Get Edges
    lp(3) {
        cin >> relation;
        mp[relation[relation[1] == '>' ? 2 : 0]]++;
    }

    // Check for Cycle
    map<int, char, greater<>> freq;
    for (char i = 'A'; i <= 'C'; i++) freq[mp[i]] = i; // reverse map

    if (freq.size() < 3)
        cout << "Impossible";
    else {
        for (auto &edge: freq) cout << edge.second;
    }

    return 0;
}
