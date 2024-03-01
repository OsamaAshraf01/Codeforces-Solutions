// Link To Problem: https://codeforces.com/contest/1927/problem/C

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void get_elements(vector<int>& v, int n){
    int x;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        v.push_back(x);
    }
}

bool is_found(vector<int>& nums, int target){
    int left = 0, right = nums.size()-1, mid;

    while(left <= right){
        mid = (left + right) / 2;
        if(nums[mid] == target)
            return true;
        else if(nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n, m, k, x;
    cin>>t;
    while(t--) {
        vector<int> a, b;
        int in_a=0, in_b=0;
        bool is_possible = true;
        cin>>n>>m>>k;
        get_elements(a, n);
        get_elements(b, m);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i = 1 ; i<=k ; i++){
            if(is_found(a, i) and is_found(b, i))
                continue;
            else if(is_found(a, i))
                in_a++;
            else if(is_found(b, i))
                in_b++;
            else {
                is_possible = false;
                break;
            }
        }

        if(in_a > k/2 or in_b > k/2 or !is_possible)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}
