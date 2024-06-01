// Link To Problem: https://codeforces.com/contest/66/problem/B

#include <bits/stdc++.h>
using namespace std;


int solve(vector<int>& heights, int position){
    int counter = 1;
    for(int i=position-1 ; i>=0 ; i--) {
        if (heights[i] <= heights[i + 1])
            counter++;
        else
            break;
    }

    for(int i=position+1 ; i<heights.size() ; i++) {
        if (heights[i] <= heights[i - 1])
            counter++;
        else
            break;
    }


    return counter;
}


int main() {
    int n, result=INT_MIN;
    cin>>n;
    vector<int> heights(n, 0);
    for(int& x : heights) cin >> x;

    for(int i=1 ; i<n-1 ; i++){
        if(heights[i] > heights[i-1] && heights[i] >= heights[i+1])
            result =  max(result, solve(heights, i)) ;
    }
    result =  max(result, solve(heights, 0)) ;
    result =  max(result, solve(heights, heights.size()-1)) ;

    cout << result << '\n';

    return 0;
}
