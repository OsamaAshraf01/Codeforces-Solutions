// Link To Problem: https://codeforces.com/contest/1980/problem/C

#include <bits/stdc++.h>

#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)
using namespace std;

bool customSort(int a, int b) {
    return a >= b;
}


int main() {
    int t, n, m;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> original(n), found(n);
        map<int, int> wanted, tailored;
        lp(n) cin >> original[i];
        lp(n) {
            cin >> found[i];
            if (found[i] != original[i])
                wanted[found[i]]++;
            else
                tailored[found[i]]++;
        }

        cin >> m;
        vector<int> operations(m);
        lp(m) {cin >> operations[i];}


        if(!wanted[operations[m-1]] && !tailored[operations[m-1]]){
            cout << "NO\n";
            continue;
        }

        lp(m)
            if(wanted[operations[i]])
                wanted[operations[i]]--;

        bool find = false;
        for(auto& x : wanted) {
            if (x.second){
                cout << "NO\n";
                find = true;
                break;
            }
        }

        if(!find)
            cout << "YES\n";
    }


    return 0;
}
