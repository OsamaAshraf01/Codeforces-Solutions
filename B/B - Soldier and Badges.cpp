// Link To Problem: https://codeforces.com/contest/546/problem/B

#include <iostream>
#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)
#define all(v) (v.begin(), v.end())
#define sz(v) (int)(v.size())

using namespace std;
typedef vector<int> vi;
typedef deque<int> di;

int main() {
    int n, factor, coins=0;
    map<int, bool> found;
    cin>>n;
    while(n--){
        cin>>factor;
        while(found[factor]){
            factor ++;
            coins ++;
        }
        found[factor] = true;
    }
    cout<<coins;
    return 0;
}
