// Link To Problem: https://codeforces.com/contest/535/problem/B

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define lp(n) for(int i=0 ; i<n ; i++)

using namespace std;

int bitmask(string& s){
    int ans = 0;

    for(int i=0 ; i<s.size() ; i++){
        if(s[s.size() - i - 1] == '7')
            ans += pow(2, i);
    }

    return ans;
}


void solve(){
    string luckyNumber;
    cin>>luckyNumber;

    cout << ( pow(2, luckyNumber.size()) - 1 ) + bitmask(luckyNumber) <<'\n';
}

int main() {
    solve();

    return 0;
}
