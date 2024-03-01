// Link To Problem: https://codeforces.com/contest/1931/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int characters[3] = {1, 1, 1};
        n-=3;
        for(int i=2 ; i>=0 ; i--){
            int lot = (n >= 25 ? 25 : n);
            characters[i] += lot;
            n -= lot;
        }

        for(int i : characters)
            cout<<char('a' + i - 1);
        cout<<"\n";

    }
    return 0;
}
