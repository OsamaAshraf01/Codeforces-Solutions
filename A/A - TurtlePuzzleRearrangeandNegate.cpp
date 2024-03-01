// Link To Problem: https://codeforces.com/contest/1933/problem/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, sum, x;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n;
        while(n--) {
            cin >> x;
             sum += abs(x);
        }
        cout<<sum<<'\n';
    }
    return 0;
}
