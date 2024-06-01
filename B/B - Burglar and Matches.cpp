// Link To Problem: https://codeforces.com/contest/16/problem/B

#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)
using namespace std;

bool customSort(pair<int, int>& p1, pair<int, int>& p2){
    return p1.second > p2.second;
}

int main() {
    int n, m, result=0;
    cin>>n>>m;
    vector<pair<int, int>> containers(m);

    for(auto& x : containers) cin >> x.first >> x.second;
    sort(containers.begin(), containers.end(), customSort);  // Sort by Value

    for(auto& container : containers){
        if(n >= container.first)
            result += container.first * container.second;
        else {
            result += n * container.second;
            break;
        }

        n -= container.first;
    }

    cout << result;

    return 0;
}
