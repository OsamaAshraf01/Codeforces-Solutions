// Link To Problem: https://codeforces.com/contest/1980/problem/B

#include <bits/stdc++.h>

#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)
using namespace std;

bool customSort(int a, int b){
    return a >= b;
}

string solve(int n, int f, int k){
    int favourite;
    vector<int> cubes(n);
    lp(n){
        cin >> cubes[i];

        if(i == f-1)
            favourite = cubes[i];
    }
    sort(cubes.begin(), cubes.end(), customSort);

    if(k == n || cubes[k] < favourite)
        return "YES\n";
    else if(cubes[k-1] == cubes[k] && cubes[k] == favourite){
        return "MAYBE\n";
    }
    else
        return "NO\n";
}

int main() {
    int t, n, f, k;
    cin >> t;
    while (t--) {
        cin >> n >> f >> k;
        cout << solve(n, f, k);
    }


    return 0;
}
