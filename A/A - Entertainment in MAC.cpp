// Link To Problem: https://codeforces.com/contest/1935/problem/A

#include <iostream>
#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)

using namespace std;

int main() {
    int t, n;   string s, s_reversed;  char st, en;
    cin>>t;
    while(t--){
        cin>>n>>s;

        s_reversed = s;
        reverse(s_reversed.begin(), s_reversed.end());
        if(s_reversed < s) {
            s = s_reversed + s;
        }

        cout<<s<<"\n";
    }
    return 0;
}
