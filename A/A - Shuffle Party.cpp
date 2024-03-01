// Link To Problem: https://codeforces.com/contest/1937/problem/A

#include <iostream>
#include <bits/stdc++.h>
#define lp(n) for(int i =0 ; i<n ; i++)
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;

        cout<<int(pow(2, int(log2(n))))<<"\n";
    }
    return 0;
}
