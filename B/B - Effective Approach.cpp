// Link To Problem: https://codeforces.com/contest/227/problem/B

#include <bits/stdc++.h>

#define lp(n) for(int i=0 ; i<n ; i++)
#define rep(i, n) for(int i=0 ; i<n ; i++)
using namespace std;

typedef pair<int, int> pii;

bool customSort(pii& p1, pii& p2){
    return p1.first < p2.first;
}

int search(vector<pii>& arr, int query){
    // Assume that arr is sorted
    int left=0, right=arr.size(), mid;

    while(left <= right){
        mid = (left + right) / 2;
        if(arr[mid].first == query)
            return arr[mid].second;
        else if(arr[mid].first < query)
            left = mid+1;
        else
            right = mid-1;
    }

    // Not Found
    return -1;
}

int main() {
    int n, m, index, z; long long left=0, right=0;
    cin >> n;
    vector<pair<int, int>> numbers(n);
    lp(n){
        cin >> z;
        numbers.emplace_back(z, i);   // Store (value, index)
    }
    sort(numbers.begin(), numbers.end(), customSort);

    cin >> m;
    vector<int> queries(m);
    for (int &x: queries) cin >> x;

    for(int query : queries){
        index = search(numbers, query);
        left += index + 1;
        right += n - index;
    }


    cout << left << " " << right;


    return 0;
}
