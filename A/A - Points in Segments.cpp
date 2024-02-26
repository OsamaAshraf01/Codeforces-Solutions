// Link To Problem: https://codeforces.com/contest/1015/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, _start, _end, count=0;     cin>>n>>m;
    vector<int> nums(m), visited(m, 0), notVisited;
    for(int i=1 ; i<=m ; i++)nums[i-1] = i;
    for(int i=0 ; i<n ; i++){
        cin>>_start>>_end;

        for(int j = _start ; j<=_end ; j++)
            visited[j-1] = 1;
    }
    for(int i=0 ; i<m ; i++){
        if(!visited[i]){
            notVisited.push_back(i+1);
            count++;
        }
    }
    cout<<count<<"\n";
    for(int e : notVisited)cout<<e<<" ";
    return 0;
}
