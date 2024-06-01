// Link To Problem: https://codeforces.com/contest/680/problem/B

#include <bits/stdc++.h>

#define lp(n) for(int i=0 ; i<n ; i++)
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    a--;
    vector<int> criminals(n);
    for (int &x: criminals) cin >> x;

    int arrested = criminals[a];

    for (int dist = 1; dist < n; dist++) {
        int left = a - dist;
        int right = a + dist;

        if (left >= 0 && right < n)
            arrested += (criminals[left] && criminals[right] ? 2 : 0);
        else if (left >= 0)
            arrested += criminals[left];
        else if (right < n)
            arrested += criminals[right];
        else
            break;
    }

    cout << arrested;

    return 0;
}
