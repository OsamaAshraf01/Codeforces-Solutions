// Link To Problem: https://codeforces.com/contest/1931/problem/C

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
    while(t--) {
        cin >> n;
        vector<int> nums(n);
        for (auto &i: nums)cin >> i;

        int first = nums[0], last = nums[n-1], index=0, left_count=1, right_count=0;
        for(int i=1 ; i<n ; i++){
            if(nums[i] == first) {
                left_count++;
                index = i;
            }
            else
                break;
        }
        for(int i=n-1 ; i>=0 && i > index ; i--){
            if(nums[i] == last)
                right_count++;
            else
                break;
        }
        int longest;
        if(first == last)
            longest = right_count + left_count;
        else
            longest = (right_count > left_count ? right_count : left_count);

        cout<<n-longest<<"\n";
    }
    return 0;
}
