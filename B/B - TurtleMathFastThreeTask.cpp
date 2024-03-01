// Link To Problem: https://codeforces.com/contest/1933/problem/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, sum, x;  map<int, int> mp;
    cin>>t;
    while(t--){
        mp.clear();
        sum=0;
        cin>>n;
        while(n--) {
            cin >> x;
            sum += x;
            mp[x % 3]++;
        }

        if((sum % 3 == 1 ) && (mp[1] != 0))
            cout<< 1 <<"\n";
        else
            cout<< (3 - sum % 3) % 3<<"\n";
    }
    return 0;
}
