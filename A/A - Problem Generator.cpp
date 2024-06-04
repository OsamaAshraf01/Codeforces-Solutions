// Link To Problem: https://codeforces.com/contest/1980/problem/A

#include <bits/stdc++.h>

#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)
using namespace std;

string difficulties = "ABCDEFG";

int main() {
    int t, n, m, result;
    string problems;
    map<char, int> freq;
    cin>>t;

    while(t--){
        cin >> n >> m;
        cin >> problems;
        freq.clear();
        for(char& c : problems)
            freq[c]++;

        result = 0;
        for(auto& c : difficulties){
            result += (freq[c]>= m ? 0 : m-freq[c]);
        }

        cout << result << '\n';
    }





    return 0;
}
