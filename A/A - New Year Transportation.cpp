// Link To Problem: https://codeforces.com/contest/500/problem/A

#include <iostream>
#include <bits/stdc++.h>
#define lp(n) for(int i=0 ; i<n ; i++)

using namespace std;


vector<int> steps;

bool is_possible = false;
int target;

void dfs(int node, int step){    
    if(node == target) {
        is_possible = true;
        return;
    }
    else if(node > target) {
        is_possible = false;
        return;
    }

    int nextNode = node+step;
    dfs(nextNode, steps[nextNode - 1]); 
}

int main() {
    int n;
    cin>>n>>target;
    steps.resize(n);

    lp(n-1){
        cin>>steps[i];
    }

    dfs(1, steps[0]);

    is_possible ? cout<<"YES" : cout<<"NO";
    return 0;
}
