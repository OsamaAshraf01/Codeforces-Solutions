// Link To Problem: https://codeforces.com/contest/1927/problem/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;   string s;
    cin>>t;
    while(t--) {
        cin>>n;
        cin>>s;
        if(s.find('B') != -1) {
            int start = s.find('B');
            reverse(s.begin(), s.end());
            int End = n - 1 - s.find('B');
            cout << End - start + 1<<"\n";
        }
        else
            cout<<0<<"\n";
    }
    return 0;
}
