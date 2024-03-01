// Link To Problem: https://codeforces.com/contest/1931/problem/B

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(vector<int>& v){
    int s=0;
    for(int i : v)
        s += i;

    return s;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> pots(n);
        for(int i=0 ; i<n ; i++)
            cin>>pots[i];

        int avg = sum(pots) / n;

        int increase=0;  bool is_sufficient = true;
        for(int i=0 ; i<n ; i++){
            if(pots[i] >= avg)
                increase += pots[i] - avg;
            else if(increase >= (avg - pots[i]))
                increase -= (avg - pots[i]);
            else{
                is_sufficient = false;
                break;
            }
        }
        cout<<((is_sufficient && !increase) ? "YES\n" : "NO\n");
    }
    return 0;
}
