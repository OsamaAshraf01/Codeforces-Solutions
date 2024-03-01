// Link To Problem: https://codeforces.com/contest/1020/problem/B

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define lp(n) for(int i=0 ; i<n ; i++)

using namespace std;

bool ansFound;
vector< vector<int> > nodes;
vector<bool> visited;

void dfs(int node){
    if(visited[node] && ansFound)
        return;

    if(visited[node]){
        cout<<node+1<<" ";
        ansFound = true;
        return;
    }

    visited[node] = true;

    dfs(nodes[node][0]);
        
}

int main() {
    int n, child;
    cin>>n;
    nodes.resize(n);
    lp(n) {
        cin >> child;
        nodes[i].push_back(child-1);
    }

    lp(n){
        visited.clear();
        visited.resize(n);

        ansFound = false;
        dfs(i);
    }
    return 0;
}
