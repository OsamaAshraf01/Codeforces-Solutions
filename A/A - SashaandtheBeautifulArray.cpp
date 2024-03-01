// Link To Problem: https://codeforces.com/contest/1929/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;  cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        sort(a, a+n);
        cout<<a[n-1] - a[0]<<"\n";
    }
    return 0;
}
