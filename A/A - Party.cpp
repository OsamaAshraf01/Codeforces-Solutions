// Link To Problem: https://codeforces.com/contest/115/problem/A

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int cnt=0, ans = 0;
vector< vector<int> > adjList;
map<int, int> depth;


void dfs(int node){
    for(int child : adjList[node]){
        depth[child] = depth[node] + 1;
        dfs(child);
    }

    ans = max(ans, depth[node]+1);
}

int main() {
    int n, manager;
    cin>>n;
    adjList.resize(n);
    for(int i=0 ; i<n ; i++){
        cin>>manager;
        if(manager != -1)
            adjList[manager-1].push_back(i);
    }

    for(int i=0 ; i<n ; i++)
        dfs(i);
    cout<<ans;
    return 0;
}
